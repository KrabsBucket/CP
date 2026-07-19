#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin >> n;
    long long s = 0;
    for (int i = 0; i < n-1; i++) 
    {
        long long x; cin >> x;
        s += x;
    }

    long long total = n * (n + 1) / 2;
    cout << total - s << "\n";
    
}

int main() {
    fastio;
    int T = 1;
    while(T--) {
        solve();
    }
}