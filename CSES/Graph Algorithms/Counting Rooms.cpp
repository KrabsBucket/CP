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
const int MAX_N = 1000;
char grid [MAX_N][MAX_N];
int row;
int col;
bool chk [MAX_N][MAX_N];
int rooms = 0;

void floodfill(int r, int c)
{
    if(r < 0 || r >= row || c < 0 || c >= col|| chk[r][c] || grid[r][c] == '#') return;

    chk[r][c] = true;
    floodfill(r, c+1);
    floodfill(r, c-1);
    floodfill(r+1, c);
    floodfill(r-1, c);
        
}

 

void solve() {

    cin >> row >> col;
    for(int i = 0; i < row;i++)
    {
        for(int j = 0; j < col;j++)
        {
            cin >> grid[i][j];
        }

    }
    for(int i = 0; i < row;i++)
    {
        for(int j = 0; j < col;j++)
        {
            if (!chk[i][j] && grid[i][j] == '.')
            {
                rooms++;
                floodfill(i, j);

            }
        }

    }

    cout << rooms << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
