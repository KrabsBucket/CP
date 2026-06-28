#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    string s1,s2;
    cin >> s2 >> s1;
    string s = "";

    



    rep(i, 0 , s2.size())
    {
        s +=s2[i];

        if (s.size () >= s1.size())
        {
            string check = s.substr(s.size() - s1.size(), s1.size());

            if(check == s1)
            {
                s.erase(s.size() - s1.size(), s1.size());
            }
        }

            
    }

    cout << s << "\n";
}

int main() {
    fastio;

    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
     freopen("censor.in", "r", stdin);
     freopen("censor.out", "w", stdout);

    solve();

    return 0;
}

