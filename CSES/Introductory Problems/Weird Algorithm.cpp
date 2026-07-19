#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin >> n;
    while(n != 1) {
        cout << n << " ";
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "1\n";
    
}

int main() {
    fastio;
    int T; 
    T = 1;
    while(T--) {
        solve();
    }
}