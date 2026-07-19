#include <bits/stdc++.h>
#include <unordered_set>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';


int solve() {
     
    int n; cin >> n;
    vector<ll> arr(n);
    rep(i, 0 , n)
    {
        cin >> arr[i];
    }
    ll k = 2;

    while (true)
    {
    unordered_set<ll> sett;

        rep(i, 0, n)
        {
            sett.insert(arr[i]%k);
        }
        
        if (sett.size() == 2)
        {
            return k;
        }
        
        k*=2; 

    }








     

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        ll r = solve();
        cout << r <<"\n";
        
    }

    return 0;
}
