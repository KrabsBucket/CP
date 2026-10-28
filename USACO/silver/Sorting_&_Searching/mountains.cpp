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
    vector<pair<ll, ll>> a(n);
    for(int i = 0; i < n; i++)
    {
        ll x,y; cin >>x >> y;
        a[i].first = (x-y);
        a[i].second = (x+y);
    }

    sort(a.begin(),a.end(), [](const pair<ll, ll>& a, const pair<ll,ll>&b){
            if(a.first != b.first)
            {
            return a.first < b.first;
            }
            return a.second > b.second;
            });

    int cnt = 0;
    ll mr = -INF;
    for(auto [l,r] : a)
    {
        if(r > mr){
            cnt++;
            mr = r;
        }
    }
    cout << cnt << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("mountains.in", "r", stdin);
     freopen("mountains.out", "w", stdout);

    solve();

    return 0;
}
