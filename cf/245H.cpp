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

int P [5005][5005];
int F [5005][5005];
void solve() {
    string s; cin >> s;
    int q; cin >> q;
    for(int i = 0; i < s.size(); i++)
    {
        P[i][i] = 1;
        F[i][i] = 1;
    }
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            P[i][i+1] = 1;
        }

    }
    for(int i = 0; i < s.size()-1; i++)
    {
        for(int j = i+1; j < s.size(); j++)
        {
            if(s[i] == s[j] && P[i+1][j-1])
            {
                P[i][j] = 1;
            }
        }
    }


    for(int i = 0; i < s.size()-1; i++)
    {
        for(int j = 1; j < s.size(); j++)
        {
            
            F[i][j] = F[i][j-1] + F[i+1][j] - F[i+1][j-1] + P[i][j];

        }
    }
    
}

int main() {

    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
