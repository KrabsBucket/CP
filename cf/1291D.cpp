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
    string s; cin >>s;
    int q; cin >> q;
    vector<array<int, 26>> arr(s.size() + 1);
    for(int i = 1; i <= s.size(); i++)
    {
        arr[i] = arr[i-1];
        arr[i][s[i-1] - 'a']++;
    }
    for(int i = 0;i < q; i++)
    {
        int l, r; cin >> l >> r;
        int diff = 0;
        for(int i = 0; i < 26; i++)
        {
            if(arr[r][i] - arr[l-1][i]> 0)
            {
                diff++;
            }
        }
        if(l==r)
        {
            cout << "Yes\n";
        }
        else if(diff <= 2 && s[l-1] == s[r-1])
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t= 1;
    while(t--) {
        solve();
    }

    return 0;
}
