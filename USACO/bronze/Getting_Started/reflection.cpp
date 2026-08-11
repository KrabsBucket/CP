#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, u; cin >> n >> u;
    vector<vector<char>> vec(n, vector<char> (n));
    vector<vector<int>> arr(n, vector<int> (n));

    rep(i, 0, n)
    {
        rep(k, 0 ,n)
        {
            cin >> vec[i][k];
        }
    }
    

    int cost = 0;
    rep(j, 0, n/2)
    {

        rep(k, 0, n/2)
        {
            int s = 0;

            s += (vec[j][k] == '#') ? 1 : 0;
            s += (vec[j][n-k-1] == '#') ? 1 : 0;
            s += (vec[n-j-1][n-k-1] == '#') ? 1 : 0;
            s += (vec[n-j-1][k] == '#') ? 1 : 0;

            arr[j][k] = s;
            arr[j][n-k-1] = s;
            arr[n-j-1][n-k-1] = s;
            arr[n-j-1][k] = s;
            
            cost += min(s, 4-s);
        }
    }
    
    cout << cost << "\n";

    rep(i, 0 , u)
    {   
        int x, y; cin >>x >> y;
        int j = x-1;
        int k = y-1;
        int val = arr[j][k];

        if((val == 1 && vec[j][k] == '#') || (val == 3 && vec[j][k] == '.') || (val == 2)) cost -= 1;
        else cost+= 1;

        cout << cost << "\n";


        vec[j][k] = (vec[j][k] == '#') ? '.':'#';
        int s = 0;

        s += (vec[j][k] == '#') ? 1 : 0;
        s += (vec[j][n-k-1] == '#') ? 1 : 0;
        s += (vec[n-j-1][n-k-1] == '#') ? 1 : 0;
        s += (vec[n-j-1][k] == '#') ? 1 : 0;
        arr[j][k] = s;
        arr[j][n-k-1] = s;
        arr[n-j-1][n-k-1] = s;
        arr[n-j-1][k] = s;
    }

    
}

int main() {
    fastio;

    solve();

    return 0;
}
