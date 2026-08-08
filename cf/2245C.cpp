#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcount(x)
#define trailz(x) __builtin_ctz(x)
#define leadz(x) __builtin_clz(x)

void solve() {
    
    int n, k; cin >> n >> k;
    int x = 32 - leadz(n-1) - 1;
    if ( n == 1)
    {
        cout << (k == 1 ? "YES\n0\n" : "NO\n");
        return;
    }

    k^=n;
    ll p = 1<<x;
    p^=(p-1);
    if (k > p)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    p= 1<<x;
    if (k == 0)
    {
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << 0 << "\n";
        return;
        
    }
    if(k <= p)
    {
        for (int i = 1; i < n; i++)
        {
            if (i == k)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << 0 << " "<<  k << "\n";
        return;
    }

    for(int i = 1 ;i < n; i++)
    {
        if (i == p || i == (k^p))
        {
            continue;
        }
        cout << i << " ";
    }
    cout << 0 << " "<< (k^p) << " "<< (p) << "\n";

   

    


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
