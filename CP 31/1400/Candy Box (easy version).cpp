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
    vector<int> arr(n+1);
    for(int i = 0; i < n; i++)
    {
        int x; cin >>x;
        arr[x]++;
    }
    sort(arr.rbegin(), arr.rend());
    int x = arr[0];
    ll c = x;
    for(int i = 1; i <= n; i++)
    {
        if( x == 0)
        {
            break;
        }
        if(arr[i] >= x)
        {
            x--;
            c += x;
        }
        else if(arr[i] < x)
        {
            x = arr[i];
            c += x;
        }
    }
    cout << c << "\n";

    
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
