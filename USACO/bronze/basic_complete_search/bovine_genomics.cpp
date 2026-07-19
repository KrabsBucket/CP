#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, m; cin >> n >> m;

    vector<string> spotty(n);
    vector<string> plain(n);
    rep(i, 0, n)
    {
        cin >> spotty[i];

    }

    rep(i, 0, n)
    {
        cin >> plain[i];
    }

    int c = 0;
    rep(j, 0, m)
    {
        rep(k, j+1, m)
        {
            rep(l, k+1, m)
            {
                unordered_map<string, bool> mp;
                rep(i, 0, n)
                {
                string s = "";
                s += spotty[i][j];
                s += spotty[i][k];
                s += spotty[i][l];

                mp[s] = true;
                }

                bool lap = false;

                rep(i, 0, n)
                {
                string s = "";
                s += plain[i][j];
                s += plain[i][k];
                s += plain[i][l];

                if(mp[s])
                {
                    lap = true;
                    break;
                }
                }

                if(!lap)
                {
                    c++;
                }



            }
        }
    }



    cout << c << "\n";

    
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("cownomics.in", "r", stdin);
     freopen("cownomics.out", "w", stdout);

    solve();

    return 0;
}
