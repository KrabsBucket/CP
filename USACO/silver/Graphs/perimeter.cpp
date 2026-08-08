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

const int max = 1000;

char grid[1000][1000];
int n;
bool visited[1000][1000];
int peri = 0;
int mperi = 0; 
int area = 0;
int marea = 0;


void floodfill(int r, int c)
{
    if (r >= n || r < 0 || c < 0 || c >= n || visited[r][c] || grid[r][c] != '#')
    {
        if(area == marea)
        {
            mperi = min(mperi, peri);
        }
        if (area > marea )
        {
            mperi = peri;
            marea = area;
        }


        return;
    }

    visited[r][c] = true;
    area++;

    if(grid[r-1][c] != '#' || r-1 < 0)
    {
        peri++;
    }
    if(grid[r+1][c] != '#' || r+1>= n)
    {
        peri++;
    }
    if(grid[r][c-1] != '#' || c-1 < 0)
    {
        peri++;
    }
    if(grid[r][c+1] != '#' || c+1 >= n)
    {
        peri++;
    }

    floodfill(r, c-1);
    floodfill(r-1, c);
    floodfill(r, c+1);
    floodfill(r+1, c);

    }

void solve() {
    cin >> n;
   for(int i = 0; i < n; i++)
   {
       for(int j= 0; j < n; j++)
       {
           cin >> grid[i][j];
       }
   }

   for(int i = 0; i < n; i++)
   {
       for(int j= 0; j < n; j++)
       {
           if (!visited[i][j])
           {
               area = 0;
               peri = 0;
               floodfill(i, j);
           }
       }
   }

   cout << marea << " "<< mperi << "\n";



}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("perimeter.in", "r", stdin);
    freopen("perimeter.out", "w", stdout);

    solve();

    return 0;
}
