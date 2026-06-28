#include <bits/stdc++.h>
#include <iostream>
using namespace std;


using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int n, m; cin >> n >> m;
    vector<int> city(n); 
    vector<int> tower(m);
    rep(i, 0 , n)
    {
        cin >> city[i];
    }
     
    rep(i, 0 ,m)
    {

        cin >> tower[i];
    }
    int r = 0;
    rep(i, 0 ,n)
    {

        auto it = lower_bound(tower.begin(), tower.end(), city[i]);
        int close = INT_MAX;
        if (it != tower.end())
        {
            close = min(close, abs(city[i] - *it));
        }

        if (it != tower.begin())
        {
            close = min(close, abs(city[i] - *(it -1)));
        }

        r = max(r, close);
    }


    cout << r <<"\n"; 
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif
        solve();

    return 0;
}
