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
    
    int n; cin >> n;
    string s; cin >> s;
    vector<int> pos;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            pos.push_back(i);
        }
    }
    int m = pos.size()/2;
    ll ss= 0;
    for(int i = 0; i < pos.size(); i++)
    {
        
        ss += abs((pos[m] + i - m) - pos[i]);
    }
    cout << ss << "\n";
        
    
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
