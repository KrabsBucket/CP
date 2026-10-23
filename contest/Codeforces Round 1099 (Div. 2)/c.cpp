#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    
    int n;cin >> n;
    vector<int> arr(n);
    int same = 1;
    map<int, pair<int,int>> mp;
    map<int, int> sol;
    int m = INT_MIN;
    for(int i = 0; i < n; i++)
    {   
        cin >> arr[i];
        if(arr[i] != arr[0])
        {
            same = 0;
        }
        sol[arr[i]]++;


        m = max(m, arr[i]);
    }
    if(same)
    {
        cout << 0 << "\n";
        return;
    }
    for(auto [key, val] : sol)
    {
        if(key == 1)
        {
            mp[2].first += val;
            mp[2].second += val;
        }
        int steps = 0;
        mp[key].second+=(steps*val);
        mp[key].first+=val;
        int x = key;
        while(x != 1)
        {
            if(x%2==1)
            {
                x = (x+1);
                steps++;
            }
            else
            {
                x/=2;
                steps++;
            }
        mp[x].first+=(val);
        mp[x].second+=(steps*val);

        }
    }
    m = INT_MAX;
    for(auto [key, val] : mp)
    {
        if(val.first == n)
        {
            m = min(m, val.second);
        }
        

    }
    cout << m << "\n";






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
