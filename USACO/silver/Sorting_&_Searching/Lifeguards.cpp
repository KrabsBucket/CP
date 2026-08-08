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
    vector<pair<ll, ll>> vec(n);
    vector<ll> arr(2*n);
    int c = 0;
    for(int i = 0; i < n ;i++)
    {
        ll x, y; cin >> x >> y;
        vec[i].first = x;
        vec[i].second = y;
        arr[c] = x;
        arr[c+1] = y;
        c+=2;
    }

    sort(arr.begin(), arr.end());

    vector<int> coord(2*n);
    for(int i = 0; i < n; i++)
    {
        int idx = lower_bound(arr.begin(), arr.end(), vec[i].first) - arr.begin();
        int idxx = lower_bound(arr.begin(), arr.end(), vec[i].second) - arr.begin();
        coord[idx] += 1;
        coord[idxx] -= 1;
    }
    ll tt = 0;

    for(int i = 0; i < 2*n-1; i++)
    {
        coord[i+1] += coord[i];
        if(coord[i] > 0)
        {
        tt += arr[i+1] - arr[i];
        }

    }

    vector<ll> guards(2*n+1, 0);
    ll m = INF;
    for(int i = 0; i < 2*n-1; i++)
    {

        guards[i+1] = guards[i];
        if(coord[i] == 1)
        {
            guards[i+1] += arr[i+1] - arr[i];
        }

    }

    for(int i = 0; i < n; i++)
    {
        int idx = lower_bound(arr.begin(), arr.end(), vec[i].first) - arr.begin();
        int idxx = lower_bound(arr.begin(), arr.end(), vec[i].second) - arr.begin();

        m = min(m , (guards[idxx] - guards[idx]));

    }

    cout << tt - m << "\n";



    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("lifeguards.in", "r", stdin);
     freopen("lifeguards.out", "w", stdout);

    solve();

    return 0;
}
