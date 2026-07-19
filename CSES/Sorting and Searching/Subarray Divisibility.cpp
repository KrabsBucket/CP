#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<ll> arr(n+1, 0);
    unordered_map<int, int> mp;
    mp[0] = 1;
    ll c = 0;
    rep(i,1, n+1)
    {
        cin >> arr[i];
        arr[i] += arr[i-1];
        ll s = (arr[i]%n + n)%n;
        c += mp[s];
        mp[s]++;
        

    }

    cout << c << "\n";
        

}

int main() {
    fastio;

        
    solve();


    return 0;
}
