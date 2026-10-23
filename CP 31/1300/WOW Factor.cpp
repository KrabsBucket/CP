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
    string s; cin >> s;
    ll w = 0, wo = 0, wow = 0;
    for(int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'v' && s[i-1] == 'v')
        {
            w++;
            wow += wo;
        }
        else if(s[i] == 'o')
        {
            wo += w;
        }
    }
    cout << wow << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
