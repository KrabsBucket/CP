#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n, m; cin >> n >> m;
    vector<pair<int, int>> limit(n);
    vector<pair<int, int>> actual(m);

    cin >> limit[0].first >> limit[0].second;
    rep(i,1, n)
    {
        cin >> limit[i].first>> limit[i].second;
        limit[i].first += limit[i-1].first;
    }

    cin >> actual[0].first >> actual[0].second;
    rep(i,1, m)
    {
        cin >> actual[i].first >> actual[i].second;
        actual[i].first += actual[i-1].first;
    }
 

    int t = 1;
    int i = 0;
    int j = 0;
    int l = limit[0].second;
    int a = actual[0].second;
    int p = 0;
    while(t < 101)
    {
        if(t > limit[i].first)
        {
            i++;
            l = limit[i].second;
        }
        if(t > actual[j].first)
        {
            j++;
            a = actual[j].second; 
        }

        p = max(p, a-l);
        t++;
    }
    cout << p << "\n";

}

int main() {
    fastio;


     freopen("speeding.in", "r", stdin);
     freopen("speeding.out", "w", stdout);

    solve();

    return 0;
}
