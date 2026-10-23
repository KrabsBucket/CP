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
    vector<int> fq(m+1);
    int cnt = 0;
    int ans = INT_MAX;
    vector<int> arr(n);
    for(auto &x : arr)
    {
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        int x = arr[j];

        for(int k = 1; k*k <= x; ++k)
        {
            if(x%k == 0 && k*k != x && k <= m)
            {
                if(fq[k] == 0)
                {
                    cnt++;
                }
                fq[k]++;
            }
            if(x%k == 0 && k*k != x && (x/k)<=m)
            {
                if(fq[x/k] == 0)
                {
                    cnt++;
                }
                fq[x/k]++;
            }
            
            if(k*k == x && k <= m)
            {
                if(fq[k] == 0)
                {
                    cnt++;
                }
                fq[k]++;
            }

        }

        while(cnt == m)
        {
            ans = min(ans, arr[j] - arr[i]);
            int y = arr[i];

            for(int k = 1; k*k <= y; k++)
            {
                if(y%k == 0 && k*k != y && k <= m)
                {
                    if(fq[k] == 1)
                    {
                        cnt--;
                    }
                    fq[k]--;
                }
                if(y%k == 0 && k*k != y && (y/k)<=m)
                {
                    if(fq[y/k] == 1)
                    {
                        cnt--;
                    }
                    fq[y/k]--;
                }
                
                if(k*k == y && k <= m)
                {
                    if(fq[k] == 1)
                    {
                        cnt--;
                    }
                    fq[k]--;
                }
            }
            i++;
        }
    }
    if(ans == INT_MAX)
    {
        cout << -1 <<"\n";
    }
    else
    {
        cout << ans << "\n";
    }
    
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
