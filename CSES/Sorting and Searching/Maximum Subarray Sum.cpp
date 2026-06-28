#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    ll n; cin >>n;
    vector<ll> nums(n);

    rep(i, 0 , n)
    {
        cin >> nums[i];
    }
    ll sum = 0;
    ll maxxi = INT_MIN;
    ll i = 0;
    while (i < n)
    {

        sum += nums[i];

        
        maxxi = max(maxxi, sum);
        if ( sum < 0)
            sum = 0;

        i++;
        
    }
    cout << maxxi << "\n";
}



int main() {
    fastio;
        solve();
}