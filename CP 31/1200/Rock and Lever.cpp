#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;

    unordered_map<unsigned int, unsigned int> mp;
    rep(i, 0, 33)
    {
        mp[i] = 0;
    }

    
    ll count = 0;
    rep(i, 0 ,n)
    {
        unsigned int mask = 1U << 31;
        unsigned int x; cin >> x;
        rep(i, 0, 32)
        {
            if (x == 0)
            {
                count += mp[0];
                mp[0]++;
                break;
            }
            if (x & mask)
            {
                count += mp[n-i];
                mp[n-i]++;
                break;
            }

            mask = mask >> 1;
        }
    }

    cout << count <<"\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
