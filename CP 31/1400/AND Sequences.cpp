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
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = arr[0];
    for(auto y : arr)
    {
        x&=y;
    }
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            c++;
        }
    }
    ll s = (1LL)*c*(c-1);
    s%= MOD;
    for(int i = 2; i < n-1; i++)
    {
        s*=i;
        s%=MOD;
    }
    cout << s << "\n";

    
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
