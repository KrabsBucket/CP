#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    string s ; cin >> s;
    long long max_count = 1;
    long long current_count = 1;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == s[i-1]) {
            current_count++;
        } else {
            max_count = max(max_count, current_count);
            current_count = 1;
        }
    }

    cout << max(max_count, current_count) << "\n";

    
}

int main() {
    fastio;
    int T = 1;
    while(T--) {
        solve();
    }
}