#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        int copy = 0;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int maxLen = 1;
        int currentLen = 1;
        
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i-1]) {
                currentLen++;
            } else {
                maxLen = max(maxLen, currentLen);
                currentLen = 1;
            }
        }
        maxLen = max(maxLen, currentLen);

        while ((1 << copy) * maxLen < n) {
            copy++;
        }
        
        int swap = n - maxLen;
        cout << copy + swap << endl;

    }
}
