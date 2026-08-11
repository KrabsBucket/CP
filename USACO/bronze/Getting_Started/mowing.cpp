#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> mp;
    pair<int, int> pos = {0, 0};


    int m = INT_MAX;
    rep(i, 0, n)
    {
        char dir;cin >> dir;
        int times ; cin >> times;

        rep(i, 0, times)
        {
            if (dir == 'N') pos.second++;
            else if (dir == 'S') pos.second--;
            else if (dir == 'E') pos.first++;
            else pos.first--;

            rep(k, 0, mp.size())
            {
                if(mp[k] == pos)
                {
                    int x = mp.size() -k; 
                    m = min(x, m);
                }
            }
            mp.push_back(pos);

        }
    }


    if (m == INT_MAX) m = -1;
    cout << m << "\n";
    
}

int main() {
    fastio;

     freopen("mowing.in", "r", stdin);
     freopen("mowing.out", "w", stdout);

    solve();

    return 0;
}
