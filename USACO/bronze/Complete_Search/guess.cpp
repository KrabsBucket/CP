#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<vector<string>> vec(n);
    
    rep(i, 0, n)
    {
        string s; cin >> s;
        int x; cin >> x;
        rep(j, 0, x)
        {
            string s1;
            cin >> s1;
            vec[i].push_back(s1);
        }
    }


    int c = 0;
    rep(i, 0, n)
    {
        rep(j, i+1, n)
        {

            int curr = 0;

            for(const string& a : vec[i])
            {
                for(const string& b : vec[j])
                {
                    if (a == b)
                    {
                        curr++;
                    }
                }
            }

            c = max(curr, c);
        }
        

    }
    cout << c + 1 << "\n";
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("guess.in", "r", stdin);
     freopen("guess.out", "w", stdout);

    solve();

    return 0;
}
