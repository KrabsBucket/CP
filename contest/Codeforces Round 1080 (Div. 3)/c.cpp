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
    ll c = 0;
    vector<int>arr(n);
    for(auto &x : arr)
    {
        cin >> x;
    }
    
    for(int i = 1; i < n-1;i++)
    {
        if(arr[i] == arr[i-1] || arr[i] == (7- arr[i-1]))
        {
            for(int j = 1; j <= 6; j++)
            {
                if((j != arr[i-1]) && j != (7-arr[i-1]) && (j != arr[i+1]) && j != (7 - arr[i+1]) )
                {
                    arr[i] = j;
                }
            }
            c++;
        }
    }
    if(arr[n-2] == arr[n-1] || arr[n-2] == 7- arr[n-1])
    {
        c++;
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
