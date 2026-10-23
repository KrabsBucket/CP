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
    int a, b, k; cin >> a >> b >> k;
    vector<int> arr(a+1), brr(b+1);
    for(int i = 0; i < k ; i++)
    {
        int x; cin >> x;
        arr[x]++;
    }
    for(int i = 0; i < k; i++)
    {
        int x; cin >> x;
        brr[x]++;
    }
    ll s = ((1LL)*k*(k-1))/2;
    for(int i = 1; i <= a; i++)
    {
        s-= ((1LL)*(arr[i])*(arr[i]-1))/2;
    }
    for(int i = 1; i <= b; i++)
    {
        s-= ((1LL)*(brr[i])*(brr[i]-1))/2;
    }

    cout << max(0LL, s) << "\n";

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
