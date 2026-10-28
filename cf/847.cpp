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

bool chk(ll t, vector<int>& p, vector<int>& a)
{
    int j = 0;
    for(int i = 0 ; i < p.size(); i++)
    {
        if(j == a.size()) break;
        int A = a[j];
        int P = p[i];
        if(A < P)
        {
            if(P - A > t) return false;

            while(j < a.size() && a[j] <= P)
            {
                j++;
            }

            while(j < a.size())
            {
                int B = a[j];

                ll l = 2*(P - A) + (B - P);
                ll r = 2*(B - P) + (P - A);
                if(min(l, r) <= t)
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            while (j < a.size() && a[j]-P <= t)
            {
                j++;
            }
                
                
        }

    }
    return j == a.size();
}

void solve() {
   int n ; cin >> n;
   string s ; cin >> s;
   vector<int> pk, as;
   for(int i = 0 ; i < n ; i++)
   {
       if(s[i] == 'P')
       {
           pk.push_back(i);
       }
       if(s[i] == '*')
       {
           as.push_back(i);
       }
   }

   ll lo = 0;
   ll hi = 2*n;
   ll ans = -1;
   while(lo <= hi)
   {
       ll t = lo + (hi - lo)/2;

       if(chk(t, pk, as))
       {
           ans = t;
           hi = t - 1;
       }
       else
       {
           lo = t +1;
       }
   }
   cout << ans << "\n";


}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
