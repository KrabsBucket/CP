#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

ll area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    ll a = abs(x1*(y2-y3) + x2*(y1-y3) + x3*(y1-y2));
    a = abs(a);
    return a;
}


void solve() {
  int n; cin >> n;
  vector<pair<int, int>> cord(n);

  rep(i, 0, n)
  {
      cin >> cord[i].first >> cord[i].second;
  }

  ll m = 0;

  rep(i, 0, n)
  {
      int x = cord[i].first; 
      int y = cord[i].second;
      rep(j, 0, n)
      {
          if (cord[j].first == x  && j!= i)
          {
              rep(k, 0 , n)
              {
                  if (cord[k].second == y && k!= i)
                  {
                      ll a = area(x, y, x, cord[j].second, cord[k].first, y);
                      m = max(a, m);
                  }
              }
        }
      }
  }


  cout << m << "\n";









}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("triangles.in", "r", stdin);
     freopen("triangles.out", "w", stdout);

    solve();

    return 0;
}
