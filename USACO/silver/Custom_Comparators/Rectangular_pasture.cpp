#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n;cin >> n;
    vector<pair<int, int >> arr(n);
    vector<vector<int>> pref(n+1, vector<int> (n+1, 0));
    for (int i =0 ; i < n; i++ )
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {arr[i].first = i+1;}
    sort(arr.begin(), arr.end(), [](const pair<int, int> &a , const pair<int, int> &b){
        return a.second < b.second;
        }
        );
    for(int i = 0; i < n; i++){arr[i].second = i+1;}

    for(int i = 0; i < n; i++) {pref[arr[i].first][arr[i].second] = 1 ;}

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            pref[i][j] += pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i++ )
    {
        for(int j = i; j < n; j++)
        {
            int x1 = min(arr[i].first, arr[j].first) -1;
            int x2 = max(arr[i].first, arr[j].first) -1;
            ans += (pref[x1+1][j+1] - pref[x1+1][i] - pref[0][j+1] + pref[0][i]) * (pref[n][j+1] - pref[n][i]- pref[x2][j+1] + pref[x2][i]);
        }
    }

    cout << ans +1 << "\n";



    
}

int main() {
    fastio;

    solve();

    return 0;
}
