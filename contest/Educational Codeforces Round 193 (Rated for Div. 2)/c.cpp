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
    int n, m, x, y; cin >> n >> m >> x >> y;
    vector<int> a(x), b(y);
    for(int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int i = 0; int j = 0;
    ll s = 0;
    int ops = 0;
    int tot = min(m,y) + min(n,x);
    if(tot == m+n)
    {
        tot--;
    }

    int row = 0;
    int col = 0;
    int a1 = 0;
    int b1 = 0;

    while(ops < tot && (i < x || j < y))
    {
        if(i < x && j < y && a[i] == b[j])
        {
            if(row < n)
            {
                 s += a[i];
                 row++;
                 a1++;
            }
            else if (col < m)
            {
                s += b[j];
                col++;
                b1++;
            }
            i++;
            j++;
            ops++;
        }
        else if (i < x && row == n && col < m && a1 > 0 && (j >= y || a[i] > b[j]))
        {
            row--;
            a1--;
        }
        else if (j < y && col == m && row < n && b1 > 0 && (i >= x || b[j] > a[i]))
        {
            col--;
            b1--;
        }
        else if((i < x && row < n) && ((j >= y) || ((j < y && (a[i] > b[j]) || col >= m))))
        {
            s += a[i];
            row++;
            i++;
            ops++;
        }
        else if((j < y && col < m) && ((i >= x) || ((i < x && (a[i] < b[j]) || row >= n))))
        {
            s += b[j];
            col++;
            j++;
            ops++;
        }
        else
        {
            break;
        }
    }

    cout << s << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
