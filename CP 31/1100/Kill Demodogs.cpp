#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        long long n; cin >> n;
        long long ans = 0;
        long long w = 1000000007;
        ans = (4*n -1) % w;
        ans *= (n+1);
        ans %= w;
        ans *= n;
        ans %= w;
        ans *= 337;
        ans %= w;

        cout << ans << '\n';
    }
}