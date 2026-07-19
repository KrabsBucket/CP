#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    vector<int> lex(26);
    int n; cin >> n;
    rep(i, 0, n)
    {
        string s1, s2; cin >> s1>> s2;
        vector<int> a(26, 0);
        vector<int> b(26, 0);
        rep(k, 0, s1.size())
        {
            a[s1[k] - 97]++;
        }
        rep(k , 0, s2.size())
        {
            b[s2[k] - 97]++;
        }

        rep(k, 0, 26)
        {
            lex[k] += max(a[k], b[k]);
        }

    }
    
    rep(i, 0, 26)
    {
        cout << lex[i] << "\n";
    }


    
}

int main() {
    fastio;

     freopen("blocks.in", "r", stdin);
     freopen("blocks.out", "w", stdout);

    solve();

    return 0;
}
