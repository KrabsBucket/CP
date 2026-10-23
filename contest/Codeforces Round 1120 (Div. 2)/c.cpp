#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    int n; cin >> n;
    vector<ll> arr(n+1); 
    for(int i= 1; i <= n; i++)
    {
        cin >>arr[i];
    }
        
    vector<ll> ans(n+1);


    for(int i =1; i <=n; i++)
    {

        ll L = arr[i] * i;
        ll R = arr[i]*i + i - 1;
        
        ans[min(L, (1LL)*n)] += 1;
        ans[min(R+1, (1LL)*n)] -= 1;

    }
    for(int i =1; i <= n; i++)
    {
        ans[i] += ans[i-1];
    }
    vector<int> sol;
    for(int i = 0; i < n; i++)
    {
        if(ans[i] == 0)
        {
            sol.push_back(i);
        }
    }
    cout << sol.size() << "\n";
    for(auto x : sol)
    {
        cout << x << " ";
    }
    
    cout << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
