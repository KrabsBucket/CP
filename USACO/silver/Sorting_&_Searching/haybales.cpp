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
    int n, q; cin >> n >> q;
    vector<int> arr(n);
    for(auto &x: arr)
    {
        cin >>x;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < q; i++)
    {
        int x, y; cin >> x >> y;
        if(y < arr[0])
        {
            cout << 0 << "\n";
        }
        else if(x > arr[n-1])
        {
            cout << 0 << "\n";
        }
        else
        {
            auto it1 = lower_bound(arr.begin(), arr.end(), x);
            auto it2 = upper_bound(arr.begin(), arr.end(), y);
            cout <<  it2 - it1  << "\n";
        }
    }


}


int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("haybales.in", "r", stdin);
     freopen("haybales.out", "w", stdout);

    solve();

    return 0;
}
