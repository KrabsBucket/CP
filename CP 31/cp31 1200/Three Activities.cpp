#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<pair<int, int>> ski(n);
    vector<pair<int, int>> movie(n);
    vector<pair<int,int>> game(n);


    rep(i, 0, n)
    {
        cin >> ski[i].first;

        ski[i].second = i;

    }

    rep(i, 0, n)
    {
        cin >> movie[i].first; 
        movie[i].second = i;
    }

    rep(i, 0, n)
    {
        cin >> game[i].first;
        game[i].second = i;

    }

    sort(ski.begin(), ski.end());
 
    sort(movie.begin(), movie.end());

    sort(game.begin(), game.end());

    ll m = -1e18; 
    for (int i = n-3; i <n; i++)
    {
        
        for (int j = n-3; j < n; j++)
        {
           if  (ski[i].second != movie[j].second)
           {
                for (int k = n-3; k< n; k++)
                {
                    if (movie[j].second != game[k].second && ski[i].second != game[k].second)
                    {
                    m = max(m, (ll)(game[k].first + movie[j].first + ski[i].first));
                    }
                }
           }
        }

    }

    cout << m <<"\n";

        

}


int main() {
    fastio;

    int t;
     cin >> t;
     while(t--) {

    solve();

     }

    return 0;
}
