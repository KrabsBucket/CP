#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    string s; cin>>s;

    long long n = s.size();
    map<char, int> maap;
    for (int i = 0; i < n ; i++)
   {
    maap[s[i]]++;

   }

  
   int count = 0;
   char index = '\0';

   for (auto& [key, value] : maap)
   {
        if ( value%2 == 1)
          {  count++;
             index = key;
          }

        
   }


   if (n%2 == 0 && count > 0)
   {    
        cout << "NO SOLUTION\n";
        return;   
   }


   if (n%2 != 0 && count != 1)
   {
        cout << "NO SOLUTION\n";
        return;
   }

   string ans = "";

   for ( auto& [key, value] : maap)
   {
       
        
            for (int i = 0; i < value/2; i++)
            {
                ans += key;
            }
        
   }

     string rev = ans;   
     reverse(rev.begin(), rev.end());
     if (n%2 != 0)
     {
        ans += index;
     }
     ans += rev;
     
    
   
     cout << ans << '\n';
    
}

int main() {
    fastio;
        solve();
}