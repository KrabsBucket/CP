#include <bits/stdc++.h>

#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, m; cin >> n >> m;

    vector<int> arr(m);

    rep(i, 0, n)
    {
        int x; cin >> x;
        x%= m;
        arr[x]++;
    }
    int ans = 0;

         int i = 1;
        int j = m -1;
        while (j > i)
        {
            if (arr[i] > 0 || arr[j] > 0)
            {
                int diff = abs(arr[i] - arr[j]);
                

                if (diff <= 1)
                {
                    ans ++;
                }
                else
                {
                    ans += diff;
                }

            
            }

            i++;
            j--;


        }

    
    if (i == j && arr[i] > 0)
    {
        ans++;
    }
    if (arr[0] > 0)
    {
        ans ++;
    }
    cout << ans << "\n";

    

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
