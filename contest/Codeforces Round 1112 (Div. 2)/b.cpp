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

    if (k > n-2)
    {
        cout << -1 << "\n";
        return;
    }

    int c = 0;
    string s = "", s1 = "", s2 = "";
    for(int i = 0; i < k/2+1 ; i++)
    {
        s += "0";
        c++;
    }
    for(int i = 0; i < (k-k/2) +1; i++)
    {
        s1+="1";
        c++;
    }
    for(int i = 0; i < (n-c); i++)
    {
        if (i%2)
        {
            s2+="1";
        }
        else
        {
            s2+="0";
        }
    }

    cout << s+s1+s2<<"\n";




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
