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
    vector<int> arr(n+1);
    for(int i= 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n ; i++)
    {
        if(arr[i] != i)
        {
            bool flg = 0;
            for(int x = i; x <= n ;x*=2)
            {
                if(arr[x] == i)
                {
                    flg = 1;
                    arr[x] = arr[i];
                    arr[i] = i;
                    break;
                }
            }
            if(!flg)
            {
                cout << "NO\n";
                return;
            }
            
        }
    }
    cout << "YES\n";

    

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
