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
   int n, k; cin >> n >> k; 
    if( k < n || k >= 2*n)
    {
        cout << -1 << "\n";
        return;
    }
    vector<vector<int>> mat(n, vector<int> (n));
    int c = 0;
    int m = 2*n- k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            if(i == j && c < 2*n-k )
            {
                mat[i][j] = c;
                c++;
            }
            else
            {
                mat[i][j] = m;
                m++;
            }
        }
    }
    for(int i =0;i < n; i++)
    {
        for(int j =0; j < n; j++)
        {
            cout << mat[i][j] +1 << " ";
        }
        cout << "\n";
    }
   


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
