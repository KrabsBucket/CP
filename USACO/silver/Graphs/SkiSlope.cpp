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
    int n ;cin >> n;

    vector<ll> enjoy(n+1, 0);
    vector<vector<ll>> skill(n+1);
    for(int i = 2; i <= n; i++)
    {
        int p; ll d,e;
        cin >> p >> d >> e;
        enjoy[i] = enjoy[p] + e;
        skill[i] = skill[p];

        skill[i].push_back(d);
        sort(skill[i].rbegin(), skill[i].rend());

        if(skill[i].size() > 11)
        {
            skill[i].pop_back();
        }

    }

    vector<pair<ll, ll>> req[11];
    for(int i = 1; i<= n; i++)
    {
        for(int c = 0; c <= 10; c++)
        {
            ll rqs = 0;
            if(c < skill[i].size())
            {
                rqs = skill[i][c];
            }

            req[c].push_back({rqs, enjoy[i]});
        }
    }

    for(int c = 0; c <= 10; c++)
    {
        sort(req[c].begin(), req[c].end());

        ll mes = 0;
        for( auto &pair : req[c])
        {
            mes = max(mes, pair.second);
            pair.second = mes;
        }
    }

    int m ; cin >> m;
    for(int i = 0; i < m; i++)
    {
        ll s, c;
        cin >> s >> c;
        if(c > 10) c = 10;
        auto it = upper_bound(req[c].begin(), req[c].end(), make_pair(s, (ll)2e18));
        --it;
        cout << it->second << "\n";

    }




}

int main() {
    fastio;


        solve();

    return 0;
}
