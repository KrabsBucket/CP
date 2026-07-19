#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    string s; cin >> s;
    vector<bool> check(26, true);
    int t = 0;
    rep(i, 0, 52)
    {
        if (check[s[i] - 'A'])
        {
            vector<int> lex(26, 0);
            int c =0;
            int j = i+1;
            while(j < 52 && s[j] != s[i])
            {
                lex[s[j] - 'A']++;
                j++;
            }
            rep(k, 0, 26)
            {
                if (lex[k] == 1) c++;
            }

            t += c;
            check[s[i] - 'A'] = false;
        }
    }

    t/=2;

    cout << t << "\n";


}
int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
   // freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("circlecross.in", "r", stdin);
     freopen("circlecross.out", "w", stdout);

    solve();

    return 0;
}
