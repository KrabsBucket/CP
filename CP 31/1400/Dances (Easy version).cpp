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
   vector<int> a(n-1), b(n);
   for(int &x : a)
   {
       cin >> x;
   }
   for(int &x : b)
   {
       cin >> x;
   }
   sort(a.rbegin(), a.rend());
   sort(b.rbegin(), b.rend());
   int c = 0;
   int j = 0;
   for(int i = 0; i < n-1; i++)
   {
        if(a[i] < b[j])
        {
            j++;
        }
        else
        {
            c++;
        }

   }
   while(j >= 0 && b[j] <= m)
   {
       j--;
       c++;
   }
   cout << c << "\n";






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
