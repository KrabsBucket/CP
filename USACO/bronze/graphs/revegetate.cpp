#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
     
    int n, m; cin >> n >> m;
    vector<vector<int>> vec(n);
    vector<int> ans(n,1);
    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        vec[x-1].push_back(y-1);
        vec[y-1].push_back(x-1);
    }


    rep(g, 2, 5)
    {
        rep(i, 0, n)
        {
            rep(j, 0, vec[i].size())
            {
                if(ans[vec[i][j]] == ans[i])
                {
                    ans[vec[i][j]] = g; 
                }
            }
        }
    }

    rep(i, 0, n)
    {
        cout<< ans[i];
    } 
    cout << "\n";



}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    solve();

    return 0;
}
