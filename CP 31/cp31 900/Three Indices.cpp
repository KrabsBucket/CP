#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        int i = 0;
        int j = n - 1;
        int k = 0;
        bool flag = false;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        while (i <= j) {
            
            if (arr[i] == n - k) {
                i++;
                k++;
            } else if (arr[j] == n - k) {
                j--;
                k++;
            } else {
                auto kit = find(arr.begin(), arr.end(), n - k);
                int it = distance(arr.begin(), kit);
                cout << "YES" << "\n";
                cout << it << " " << it+1 << " " << it+2 << "\n";
                flag = true;
                break;
            }
        }

        if (!flag) {
            cout << "NO" << "\n";
        }
    }
}