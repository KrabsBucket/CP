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
    array<int, (200001)> arr;
    vector<vector<int>> vec(n);
    for(int &x: arr)
    {
        x = 0;
    }
    for(int i =0; i < n; i++)
    {
        int q; cin >> q;
            for(int j =0; j < q; j++)
            {
                int x; cin >> x;
                {
                    arr[x]++;
                    vec[i].push_back(x);
                }

            }
    }
    for(int i =0; i < n; i++)
    {
        bool flag = true;
        for(auto &x : vec[i])
        {
            if(arr[x] < 2)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "YES\n";
            return;
        }

    }
    cout << "NO\n";
    

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
