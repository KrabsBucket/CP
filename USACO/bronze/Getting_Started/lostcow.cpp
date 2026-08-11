#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int x,y; cin >> x>> y;
    int i = 0;
    int dis = 0;
    int dir_b = (y > x) ? 1 : -1;
    int next = 0;
    int prev = x;
    while(true)
    {
        int t = 1;
        rep(k, 0, i)
        {
            t*=(-2);
        }
        int dir_t = abs(t)/t;


        if( abs(y-x) <= abs(t)  && dir_t == dir_b)
        { 
            cout << dis + abs(y-prev);
            return;
        }


        next = x + t;
        dis += abs(next - prev); 
        prev = next;
        i++;
    }
    
}

int main() {
    fastio;

     freopen("lostcow.in", "r", stdin);
     freopen("lostcow.out", "w", stdout);

    solve();

    return 0;
}
