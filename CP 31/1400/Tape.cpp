#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> b(n); 
    ll s = 0;
    for(int i = 0; i < n ; i++)
    {
        cin >> b[i];
    }
    s = b[n-1] - b[0] + 1;
    vector<int> c(n-1);
    for(int i = 0; i < n-1; i++)
    {
        c[i] = b[i+1] - b[i] -1;
    }

    if(k >= n)
    {
        cout << n << "\n";
        return;
    }
    sort(c.rbegin(), c.rend());

    for(int i = 0; i < k-1; i++)
    {
        s -=c[i];
    }
    cout << s << "\n";


     

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
