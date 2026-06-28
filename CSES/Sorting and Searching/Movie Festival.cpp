#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n; cin >> n;


    vector<pair<ll, ll>> time(n);

    rep(i, 0 , n)
    {
        cin >> time[i].second >> time[i].first;
    }

    sort(time.begin(), time.end());
   
    ll taim = 0;
    ll currt = 0;
    ll maxi = 1;

    rep(i, 0, n)
    {
        
        if ( time[i].second >= taim )
        {
            currt ++;
            taim = time[i].first;
            maxi = max(maxi, currt);
        }

    }

    cout << maxi <<"\n";

}



int main() {
    fastio;
        solve();
    }