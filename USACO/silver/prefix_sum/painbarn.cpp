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

int arr [1002][1002];
void solve() {
    int n, k; cin >> n >> k;
    for(int i =0; i < 1002; i++)
    {
        for(int j =0; j < 1002 ; j++)
        {
            arr[i][j] = 0;
        }
    }
    for(int i =0; i < n; i++)
    {
        int r1,r2,c1,c2;
        cin >> c1 >> r1 >> c2 >> r2;
        arr[r1][c1] += 1;
        arr[r2][c1] -=1;
        arr[r1][c2] -=1;
        arr[r2][c2] +=1;


    }
    for(int i = 0 ; i < 1002; i++)
    {
        for(int j = 1; j < 1002 ; j++)
        {
            arr[j][i] += arr[j-1][i];
        }
    }
    for(int i = 0 ; i < 1002; i++)
    {
        for(int j = 1; j < 1002 ; j++)
        {
            arr[i][j] += arr[i][j-1];
        }
    }
    int c = 0;
    for(int i =0; i < 1002; i++)
    {
        for(int j =0; j < 1002 ; j++)
        {
            if(arr[i][j] == k)
            {
                c++;
            }
        }
    }
    cout << c << "\n";

    
}

int main() {
    fastio;

     freopen("paintbarn.in", "r", stdin);
     freopen("paintbarn.out", "w", stdout);

        solve();

    return 0;
}
