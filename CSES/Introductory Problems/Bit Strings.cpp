#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin>> n;
    long long MOD = 1000000007;

    long long ans = 1;
    long long base = 2;

    while (n > 0)
    {
        if (n & 1)
            {
                ans = base*ans % MOD;

            }


        base = (base * base) % MOD;

        n >>= 1;
    }

    cout << ans << "\n";
    
}

int main() {
    fastio;
        solve();
}