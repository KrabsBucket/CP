#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {                    
    int n, m; cin >> n >> m;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        mp[s[0]]++;
    }
    bool flag = 0;
    for(int i = 0; i < m ; i++)
    {
        string s; cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            if(mp[(s[j]+ 32)] == 0)
            {
                flag = 1;
            }
        }
    }

    cout << (flag ? "NO\n":"YES\n");


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
