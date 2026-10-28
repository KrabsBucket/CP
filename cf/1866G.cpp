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
vector<vector<pair<int,ll>>> ar;
int n;

bool chk(ll z){

    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>> pq;
    for(int i = 0 ; i< n; i++)
    {
        for(int j = 0; j < ar[i].size(); j++)
        {
            pq.push(ar[i][j]);
        }
        if(!pq.empty() &&pq.top().first < i) return false;

        ll seats = z;
        while(seats > 0 && !pq.empty())
        {
            auto [R, cnt] = pq.top(); pq.pop();

            ll take = min(cnt, seats);
            cnt -= take;
            seats -= take;
            if(cnt > 0)
            {
                pq.push({R, cnt});
            }
        }
    }

    return (pq.empty());

}

void solve() {
    cin >> n;
    vector<int> cr (n);
    ar.assign(n, vector<pair<int,ll>>());
    ll lo = 0;
    ll hi = INF;
    for(auto &x : cr)
    {
        cin >> x;
    }
    vector<int> dr(n);
    for(auto &x : dr)
    {
        cin >> x;
    }

    for(int i = 0;i < n; i++)
    {
        if(cr[i] == 0)continue;
        int Li = max(0, i - dr[i]);
        int Ri = min(n-1, i + dr[i]);

        ar[Li].push_back({Ri, (ll)cr[i]});
    }

    ll ans = -1;
    while(lo <= hi)
    {
        ll z = (lo + (hi-lo)/2);
        if(chk(z))
        {
            ans = z;
            hi = z -1;
        }
        else
        {
            lo = z+1;
        }
    }
    cout << ans << "\n";
    
    
        
    


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
