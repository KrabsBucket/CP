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
    
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> pref(n, 0);
    for(int i = 0; i < n-1; i++)
    {
        pref[i+1] = pref[i] + (s[i] == s[i+1]);

    }
    for(int i = 0; i< q; i++)
    {
        int l , r , k; cin >> l >> r >> k; 
        r--; l--;
        int bad = (pref[r] - pref[l]);
        bad = (bad+1)/2;
        if(k >= bad)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
