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
    int x, y; cin >> x >> y;
    int n = x+y;
    if(x == 0 || y == 0)
    {
        cout << x+y << " " << 0 << "\n";
        return;
    }
    int c = x+y;
    int m = 1;
    while(c >= m)
    {
        m*=2;
    }
    m/= 2;
    if(y > m)
    {
        int cnt = 0;
        int s = 0;
        int p = x^y;
        while(x>0)
        {
            if((x^y) == n)
            {
                cout << n << " " << cnt << "\n";
                return; 
            }
            if((x^y) > p)
            {
                p = x^y;
                s = cnt;
            }
            y++; x--;
            cnt++;
        }
        cout << p << " " << s << "\n";
        return;
    }
    cout << n << " " << m-y << "\n";
    
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
