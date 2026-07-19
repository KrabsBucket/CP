#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   int n; cin >> n;
   vector<vector<int>> lex_odd(n+1, vector<int> (26, 0));
   vector<vector<int>> lex_even(n+1, vector<int> (26, 0));
   string s; cin >> s;

   if ( n == 1)
   {
       cout << 1 << "\n";
       return;
   }
   rep(i,0, n)
   {
       rep(j, 0, 26)
       {
            lex_odd[i+1][j] += lex_odd[i][j];
            lex_even[i+1][j] += lex_even[i][j];
       }

        int c = s[i] - 'a';
       if (i%2)
       {
           lex_odd[i+1][c]++;
       }
       else
       {
           lex_even[i+1][c]++;
       }


   }


   if (n%2)
   {
       int tot = n;

       rep(i, 0, n)
       {
           int beste = 0;
           int besto = 0;
           rep(j, 0, 26)
           {
               int sufe = lex_even[n][j] - lex_even[i+1][j];
               int sufo = lex_odd[n][j] - lex_odd[i+1][j]; 

               int ne = lex_even[i][j] + sufo;
               int no = lex_odd[i][j] + sufe;

               beste = max(beste, ne);
               besto = max(besto, no);

           }


           tot = min(tot , (n- beste - besto));
       }

       cout << tot << "\n";
       return;

   }
   int ce = 0;
   int co = 0;
   rep(i, 0, 26)
   {
       ce = max(ce, lex_even[n][i]);
       co = max(co, lex_odd[n][i]);
   }
   cout << n - co -ce<< "\n";





   

}

int main() {
    fastio;


    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
