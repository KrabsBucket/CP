#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    vector<vector<char>>  vec(3, vector<char> (3));
    set<char> s;
    rep(i, 0, 3)
    {
        rep(k, 0, 3)
        {
            cin >> vec[i][k];
            s.insert(vec[i][k]);
        }
    }

    set<char> ones;
    set<set<char>> twos;

    rep(i, 0, 3)
    {
        if(vec[i][0] == vec[i][1] && vec[i][1] == vec[i][2])
        {
            ones.insert(vec[i][0]);
        }

        if(vec[0][i] == vec[1][i] && vec[1][i] == vec[2][i])
        {
            ones.insert(vec[0][i]);
        }


        set<char> s1;
        rep(k, 0, 3)
        {
            s1.insert(vec[i][k]);
        }

        if (s1.size() == 2)
        {
            twos.insert(s1);
        }



        set<char> s2;
        rep(k, 0, 3)
        {
            s2.insert(vec[k][i]);
        }
        if (s2.size() == 2)
        {
            twos.insert(s2);
        }

    }
    
    if(vec[0][0] == vec[1][1] && vec[1][1] == vec[2][2])
    {
        ones.insert(vec[0][0]);
    }
    if(vec[0][2] == vec[1][1] && vec[1][1] == vec[2][0])
    {
        ones.insert(vec[2][0]);
    }

    set<char> s1 = {vec[0][0], vec[1][1], vec[2][2]};
    if (s1.size() == 2)
    {
        twos.insert(s1);

    }

    set<char> s2 = {vec[0][2], vec[1][1], vec[2][0]};
    if (s2.size() == 2)
    {
        twos.insert(s2);

    }


    cout << ones.size() << "\n";
    cout << twos.size() << "\n";

    

}

int main() {
    fastio;


     freopen("tttt.in", "r", stdin);
     freopen("tttt.out", "w", stdout);

    solve();

    return 0;
}
