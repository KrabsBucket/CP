#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
         
        string s; cin >> s;

        int n = s.length();
        unordered_map<char, int> freq;
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }
        if (freq.size() == 1) {
            cout << "YES\n";
            continue;
        }
        bool flag = true;
        int r = freq.size();

        for (int i = r; i < n; i++) {
            if (s[i] != s[i-r]) {
                flag = false;
            }
        }

        
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}