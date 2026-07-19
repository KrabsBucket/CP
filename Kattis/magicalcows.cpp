#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll c, n ,m ; cin >> c >> n >> m;
    vector<ll> cows;
    ll count = 0;
    vector<ll> days(m);
    vector<ll> soln(51, 0);
    rep(i, 0, n)
    {
        ll x; cin >> x;
        if (2*x > c)
            count++;
        else if ( x >0 )
            cows.push_back(x);
        
    }
    ll maxi = INT_MIN;
    rep(i, 0, m)
    {
        cin >> days[i];
        maxi = max(maxi, days[i] );
    }

    ll s = cows.size();
    ll extra = s;

    soln[0] = n;
    rep(i, 1, maxi+1)
    {
        
        if (extra > 0)
        {
            rep(j, 0, s)
            {
                cows[j] *=2;
                if (cows[j] > c )
                {
                    count++;
                    extra--;
                    cows[j] = 0;
                }

            }
        }
        count *= 2;
        ll result = count + extra;
        soln[i] = result;
    }


    rep(i, 0, m)
    {
        cout << soln[days[i]] << "\n";
    }
}

int main() {
    fastio;
        solve();
}