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
   int n;cin >> n;
   string s; cin >> s;
   vector<int> a(n+1, 0);
   stack<int> st;
   for(int i = 0; i< n; i++)
   {
       if(s[i] == '1')
       {
           st.push(i+1);
       }
       else if(s[i] == '2')
       {
           if(st.empty())
           {
               a[i+1] = 1;
           }
           else
           {
               int x = st.top();
               a[x] = 1;
               st.pop();
           }
       }
       else
       {
           a[i+1] = 1;
       }
   }
   int c = 0;
   for(int i = 1; i <= n; i++)
   {
       if(a[i] == 0)
       {
           c++;
       }
   }
   cout << c << "\n";
   if(c != 0)
   {
       for(int i = 1; i <= n; i++)
       {
           if(a[i] == 0)
           {
               cout << i << " ";
           }
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
