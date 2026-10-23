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
    for(auto &x : arr)
    {
        cin >> x;
    }
    for(int i = 0; i <n; i++)
    {
        if(arr[i] == 1)
        {
            break;
        }
        if(arr[i] == -1)
        {
            arr[i] = 1;
            break;

        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == 1)
        {
            break;
        }
        if(arr[i] == -1)
        {
            arr[i] = 1;
            break;

        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == -1)
        {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }
    cout << "\n";
    
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
