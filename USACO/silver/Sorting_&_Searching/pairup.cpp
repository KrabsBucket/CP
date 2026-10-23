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
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >>x >>y;
        arr[i] = {y, x};
    }
     
    sort(arr.begin(), arr.end());

    int i = 0, j = n-1;
    int m = INT_MIN;
    while(i <= j)
    {
        m = max(m, arr[i].first+arr[j].first);
        if(arr[i].second > arr[j].second)
        {
            arr[i].second -= arr[j].second;
            j--;
        }
        else if(arr[j].second > arr[i].second)
        {
            arr[j].second -= arr[i].second;
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    cout << m  << "\n";
        
    
}

int main() {
    fastio;


     freopen("pairup.in", "r", stdin);
     freopen("pairup.out", "w", stdout);

        solve();

    return 0;
}
