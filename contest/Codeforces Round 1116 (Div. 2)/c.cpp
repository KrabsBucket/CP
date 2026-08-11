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
    int n, k; cin >> n >> k;
    string s;cin >> s;
    ll R = 0;
    ll B = 0;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == '1')
        {
            if(s[i+1] == '0' && i%2 == 0)
            {
                R++;
            }
            else if(s[i+1] == '0' && i%2)
            {
                B++;
            }

            if(s[i+1] == '1' && i%2 == 0)
            {
                B++;
            }
            else if(s[i+1] == '1' && i%2)
            {
                R++;
            }
        }
    }
    if(s[s.size()-1] == '1' && s[0] == '1')
    {
        R++;
    }
    else if(s[s.size()-1] == '1' && s[0] == '0')
    {
        B++;
    }

    cout << R << " " << B << "\n";
     
     
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
