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
   int n, q; cin >> n >> q;
   string s; cin >> s;
   bool pos = true;
   for(auto x : s)
   {
       if (x == 'B')
       {
           pos = false;
           break;

       }
   }
 
   if (pos)
   {
       for(int i = 0;i < q; i++)
       {
       int quer; cin >> quer;
       int t = quer%n;
       quer/=n;
       cout << quer*n + t << "\n";

       }
   }

   else{

       for(int j =0; j< q; j++)
       {
           int t = 0;
           int quer; cin >> quer;
           int i = 0;
            while(quer > 0)
            {
                if(s[i] == 'B')
                {
                    quer/=2;
                }
                if(s[i] == 'A')
                {
                    quer -= 1;
                }
                

                t++;
                if (i == n-1)
                {
                    i = -1;
                }

                i++;
            }

            cout << t << "\n";

       }
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
