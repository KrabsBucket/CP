#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
   string s;
   cin >> s;
   vector<ll> chk(2019);
   chk[0]++; 
   ll x = 0;
   int ten = 1;
   for (int i = s.size()-1; i >= 0; i--)
   {
       x += (ten)*((int)(s[i] - '0'));
       chk[x%2019]++;
       ten = (ten *10)%2019;
   }

    ll c = 0;
   rep(i, 0, 2019)
   {
       ll s = chk[i];
       c += (ll)(s*(s-1))/2;
       
   }
   cout << c << "\n";




}

int main() {
    fastio;
    solve();

    return 0;
}
