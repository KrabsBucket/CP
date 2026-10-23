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
   vector<int> arr(n);
   vector<int> bits(31, 0);
   
   for(auto &x : arr)
   {
       int p = 1;
       int s = 0;
       cin >> x;
       while(s < 31)
       {
           if(x & p)
           {
               bits[s]++;
           }
           p = p<<1;
           s++;

       }
   }

   int k = 1;
    while (k <= n)
    {
        bool flag = true;
        for(int i = 0; i < 31; i++)
        {
            if(bits[i] % k)
            {
                flag = false;
                break;
            }

        }
        if (flag)
        {
            cout << k << " ";
        }
        k++;

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
