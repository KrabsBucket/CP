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
    vector<pair<int,int>> arr(n);
    vector<int> ans;
    for(int i = 0; i<n; i++)
    {
        cin>> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.rbegin(), arr.rend());
    ll s = 0;
    for(int i = 1; i < n; i++)
    {
        s+=arr[i].first;
    }
    for(int i = 1;i < n;i++)
    {
        if(arr[i].first == (s-arr[0].first))
        {
            ans.push_back(arr[i].second+1);
        }
        else if(arr[i].first < (s-arr[0].first))
        {
            break;
        }
    }
    if(s - arr[1].first == arr[1].first)
    {
        ans.push_back(arr[0].second +1);
    }
        
    cout << ans.size() << "\n"; 
    for(auto u : ans)
    {
        cout << u << " ";
    }
    cout << "\n";
        
     

        

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
