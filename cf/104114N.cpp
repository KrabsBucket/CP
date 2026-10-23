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
    int n, m; cin >> n >> m;
    vector<int> arr(n);
    for(int &x:arr)
    {
        cin >> x;
    }
    for(int i = 1; i < n; i++)
    {
        arr[i] = max(arr[i-1] - m, arr[i]);
    }
    for(int i = n-2; i >= 0; i--)
    {
        arr[i] = max(arr[i+1]-m, arr[i]);
    }
    for(auto &x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";

 
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t= 1;
    while(t--) {
        solve();
    }

    return 0;
}
