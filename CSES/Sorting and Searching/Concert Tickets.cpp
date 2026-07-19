#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, m; cin >> n >> m;
    vector<long long > maxx(m);
    multiset<long long> prices;

    for ( int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        prices.insert(x);
    }

    for ( int i = 0; i < m ; i++)
    {
        cin >> maxx[i];

    }

    for (int i = 0; i < m; i++)
    {
        auto it = prices.upper_bound((maxx[i]));

        if ( it == prices.begin()){

            cout << "-1\n";
        }

        else{
            --it;
            cout << *it << "\n";
            prices.erase(it);
        }
    }
    
    

}

int main() {
    fastio;
        solve();
}