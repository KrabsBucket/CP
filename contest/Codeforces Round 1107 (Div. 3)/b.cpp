#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

vector <ll > good_y;
void precompute()
{
    for(int i = 1; i <= 9; i++)
    {
        for(char d1 = '0'; d1<= '9' ; d1++)
        {
            for(char d2 = d1; d2 <= '9' ; d2++)
            {
                for(int c1 = 0; c1 <= i; c1++)
                { int c2 = i - c1;
                
                string s = "";

                for(int k = 0; k < c1; k++) 
                    s+=d1;
                for(int k = 0; k < c2; k++) 
                    s+=d2;

                sort(s.begin(), s.end());

                while(true){
                    if (s[0] != '0'){
                        ll val = stoll(s);
                    if(val >= 2)
                    {
                        good_y.push_back(val);

                    }
                    }

                    if(!next_permutation(s.begin(), s.end()))
                        break;

                }

                }


            }
        }
    }
    good_y.push_back(1e9);
    sort(good_y.begin(), good_y.end());
    good_y.erase(unique(good_y.begin(), good_y.end()), good_y.end());


}

void solve() {
   int x; cin >> x;


   for(ll y : good_y)
   {
       ll t = ll (x*y);
       int dis = 0;
       bool flag = true;
       vector<bool> seen(10, false);

       while(t > 0)
       {
           int d = t%10;

           if(seen[d] == false)
           {
               seen[d] = true;
               dis++;
               if (dis > 2)
               {
                   flag = false;
                   break;

               }
           }
           t/=10;

       }

       if (flag)
       {
           cout << y << "\n";
           return;
       }
   }

   

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    precompute();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
