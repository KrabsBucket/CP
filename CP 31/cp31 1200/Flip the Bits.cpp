#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n; 
    string s1, s2; cin >> s1 >> s2;
    int c0 = 0;
    int c1 = 0;
    rep(i, 0, n)
    {
        if (s1[i] == '0')
        {
            c0++;
        }

        else
        {
            c1++;
        }
    }
    int flip = 0;
    for (int k = n-1; k >= 0; k--)
    {
         char cur = s1[k];
         if (flip&1)
         {
             cur = (cur == '0') ? '1': '0';
         }

         if (cur != s2[k])
         {
             if (c0 != c1)
             {
                 cout << "NO\n";
                 return;
             
            }
             else
             {
                 flip^=1;
                 swap(c0, c1);
                 cur = (cur == '0') ? '1' : '0';

             }
         }

         if (cur == '1')
         {
            c1--;
         }
         else
         {
             c0--;
         }



    }

    cout << "YES\n";
    
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
