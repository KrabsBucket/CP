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
    vector<int> carr(m+1, 0);
    ll s = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        carr[x]++;
        s+= x;
    }
    

    vector<ll> ans(m+1);
    for(int i = 1; i <= m; i++)
    {
        carr[i] += carr[i-1];
    }

    for(int c = 1; c <= m ; c++)
    {
        ll curr = 0;
        ll i = 1;
        
        for(int k = 1; k <= m/c; k++)
        {
            ll limit = (1LL << k);
            while(i <= limit && i*c <= m)
            {
                curr += n - carr[i*c -1];
                i++;
            }
            ans[k] = max(ans[k], curr);
            if(k > 20)
            {
                for(int i = 1; i <= m; i++)
                {
                    cout << max(ans[i], ans[i-1]) << " ";
                }
                cout << "\n";
                return;

            }
        }


    }






    for(int i = 1;i <= m; i++)
    {
        cout << max(ans[i], ans[i-1]) << " ";
    }
    cout <<"\n";
    

    
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
