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
   int n, m;cin >> n >> m;
   vector<int> a(n+1), b(m+1);
   for(int i = 1; i <= n; i++)
   {
       cin >> a[i];
   }
   for(int i = 1; i <= m; i++)
   {
       cin >> b[i];
   }
   vector<int>pref(m+2, n+1) , suff(m+2, 0);
   pref[0] = 0;
   int j = 1;
   for(int i = 1; i<=m; i++)
   {
       while(j <= n && a[j] < b[i])
       {
           j++;
       }
       if(j <= n)
       {
           pref[i] = j;
           j++;
       }
       else
       {
           break;
       }
   }
   if(pref[m] <= n)
   {
       cout << 0 << "\n";
       return;
   }
   suff[m+1] = n+1;
   j = n;
   for(int i = m; i >= 1; i--)
   {
       while(j>=1 && a[j] < b[i])
       {
           j--;
       }
       if(j >= 1)
       {
           suff[i] = j;
           j--;
       }
       else
       {
           break;
       }
   }

   int ans = 2e9;

   for(int i = 1; i<= m; i++)
   {
       if(pref[i-1] < suff[i+1])
       {
           ans = min(ans , b[i]);
       }
   }
   if(ans == 2e9) cout << -1 << "\n";
   else cout << ans << "\n" ;


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
