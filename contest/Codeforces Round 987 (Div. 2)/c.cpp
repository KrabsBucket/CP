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
   vector<int> vec(n+1,0);
   if(n%2)
   {
        if(n < 27)
        {
            cout << -1 << "\n";
            return;
        }
    
        vec[1] = 1;
        vec[26] = 1;
        vec[2] = 2;
        vec[27] = 2;
        vec[11] = 2;
        int m = 3;
        for(int i = 3; i <= n ; i++)
        {
            if(i%2 == 0 && i > 11)
            {
                m++;
            }
            if(!vec[i])
            {
                vec[i] = m;
            }
            if(i%2==0 && i < 10)
            {
                m++;
            }

        }
        for(int i =1; i <= n; i++)
        {
            cout << vec[i] << " ";
        }


        cout << "\n";
       return;
   }
   int m = 1;
   for(int i = 0; i < n; i++)
   {
       cout << m << " ";
       if(i%2)
       {
           m++;
       }
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
