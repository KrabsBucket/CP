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
    
    int n ; cin >> n;
    vector<pair<ll, ll>> pairs(n);
    vector<ll> arr(2*n);
    int c = 0;
    for(int i = 0; i < n ; i++)
    {
        ll x, y; cin >> x >> y;
        pairs[i] = {x , y+1};
        arr[c] = x;
        arr[c+1] = y+1;
        c+=2;
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());


    vector<ll>points(arr.size(), 0);
    for(int i = 0; i < n; i++)
    {
        int indx1 = lower_bound(arr.begin(), arr.end(), pairs[i].first) - arr.begin();
        int indx2 = lower_bound(arr.begin(), arr.end(), pairs[i].second) - arr.begin();
        points[indx1] += 1;
        points[indx2] -= 1;
   }
    
    for(int i = 0; i < arr.size()-1; i++)
    {
        points[i+1] += points[i];
    }

    vector<ll> val(n+1);
    for(int i = 0; i < points.size() - 1 ; i++)
    {
        val[points[i]] += (arr[i+1] - arr[i]);

    }

    for (int i = 1; i <= n; i++)
    {
        cout << val[i] << " ";
    }

    cout << "\n";







}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
