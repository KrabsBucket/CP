#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int k, n; cin >> k >> n;
    vector<vector<int>> a (k, vector<int> (n));
    rep(i, 0, k)
    {
        rep(l, 0, n)
        {
            cin >> a[i][l];
        }
    }
    vector<pair<int, int >> main(((n)*(n-1))/2);
    vector<bool> m (((n)*(n-1)/2), true);


    int idx = 0;
    rep(i, 0, n)
    {
        rep(j, i+1, n)
        {
         main[idx].first = a[0][i];
         main[idx].second = a[0][j];
         idx++;
        }
    }

    rep(i, 0, main.size())
    {
        rep(j, 1, k)
        {
            int id1 = -1;
            int id2 = -1;
            rep(r, 0, n)
            {
                if (a[j][r] == main[i].first)
                {
                    id1 = r+1;
                }
                if (a[j][r] == main[i].second)
                {
                    id2 = r+1;
                }
            }

            if(id1 > id2)
            {
                m[i] = false;
            }
        }
    }

   int count = 0;

   rep(i, 0, m.size())
   {
       if(m[i])
       {
           count++;
       }
   }

   cout << count << "\n";
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("gymnastics.in", "r", stdin);
     freopen("gymnastics.out", "w", stdout);

    solve();

    return 0;
}
