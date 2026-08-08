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

    int c0 = 0;
    int c1 = 0;
    for(int i = 1; i < n; i++)
    {
        if (s[i-1] == s[i])
        {
            c1 += (s[i] == '1' ? 1 : 0);
            c0 += (s[i] == '0' ? 1 : 0);
        }
    }

    if (c0==0 && c1==0)
    {
        cout << 0 << "\n";
        return;
    }

    if(abs(c0-c1)<2)
    {
        cout << c0+c1 << "\n";
        return;
    }
    if (c1 > c0)
    {

        if (s[0] == '0' && c1-c0>1)
        {
            c0++;
        }
        if (s[n-1] == '0' && c1 - c0>1)
        {
            c0++;
        }
    }
    if (c0 > c1)
    {
        if (s[0] == '1' && c0 - c1 > 1)
        {
            c1++;
        }
        if (s[n-1] == '1' && c0 - c1 > 1)
        {
            c1++;
        }

    }

    if (abs(c0-c1) < 2)
    {
        cout << c0+c1<< "\n";
        return;
    }
    cout << -1 << "\n";



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
