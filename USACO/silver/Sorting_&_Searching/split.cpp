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

ll sp(vector<pair<ll,ll>> cows)
{
    int n = cows.size();
    sort(cows.begin(), cows.end());

    vector<ll> pmin(n+2, INT_MAX), pmax(n+2,INT_MIN) , smin(n+2, INT_MAX), smax(n+2, INT_MIN);

    for(int i = 1; i <= n; i++)
    {
        pmin[i] = min(pmin[i-1], cows[i-1].second);
        pmax[i] = max(pmax[i-1], cows[i-1].second);
        smin[n - i + 1] = min(smin[n - i + 2], cows[n-i].second);
        smax[n - i + 1] = max(smax[n - i + 2], cows[n-i].second);
    }
    
    ll ma = INF;
    for(int i = 0; i < n-1; i++)
    {
        if(cows[i].first == cows[i+1].first) continue;
        ma = min(ma, ((cows[i].first - cows[0].first)*(pmax[i+1] - pmin[i+1]) + (cows[n-1].first - cows[i+1].first)*(smax[i+2] - smin[i+2])));
    }
    return ma;
}


void solve() {
    int n; cin >> n;
    vector<pair<ll,ll>> cows(n);
    ll x = INT_MAX, X = INT_MIN, y = INT_MAX, Y = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second;
        x = min(cows[i].first, x);
        X = max(cows[i].first, X);
        y = min(cows[i].second, y);
        Y = max(cows[i].second, Y);
    }
    ll am = (X-x)*(Y-y);

    ll ma = sp(cows);

    for(int i = 0; i < n; i++)
    {
        swap(cows[i].first, cows[i].second);
    }
    ma = min(ma, sp(cows));

    cout << am - ma << "\n" ;
        

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("split.in", "r", stdin);
     freopen("split.out", "w", stdout);

    solve();

    return 0;
}
