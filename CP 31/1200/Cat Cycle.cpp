#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void  solve() {
    
    ll n, k; cin >> n >> k;
    k--;
    if (n%2 == 0)
    {
        cout << (k)% n + 1 << "\n";
    }

    else
    {
        int steps = (n-1)/2;
        int skip = (k)/steps;
        int out = (k+skip)%n + 1;
        cout << out << "\n";

    }
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
