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
    int n = s.size();

    for(int i=1; i<n; i++)
    {
        if(s[i-1] == s[i])
        {
            if (s[i] == 'z') s[i] = 'a'; 
            else ++s[i];

        if(i != n-1 && s[i+1] == s[i])
        {
            if (s[i] == 'z') s[i] = 'a';
            else ++s[i];
        }
    }
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
