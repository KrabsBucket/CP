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

int n;
vector<vector<int>> pref;
int cal(int l, int r)
{
    int len = r- l+1;
    int s = 0;
    for(int j = 0; j < 30; j++)
    {
        int c = pref[r][j] - pref[l-1][j];

        if(c == len)
        {
            s |= (1<<j);
        }
    }
    return s;
}
void solve() {
    cin>>n;
    vector<int> a(n+1);
    pref.assign(n+1, vector<int>(30,0));

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j =0; j < 30; j++)
        {
            pref[i][j]= pref[i-1][j];
            if((a[i] >> j)&1)
            {
                pref[i][j]++;
            }
            
        }
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++)
    {
        int l, k;cin >> l >> k;

        int lo = l;
        int hi = n;
        int ans = -1;
        while(lo <= hi)
        {
            int r = (lo +hi)/2;

            if(cal(l, r) >= k)
            {
                lo = r+1;
                ans = r;
            }
            else
            {
                hi = r-1;
            }
        }
        cout << ans << " "; 

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
