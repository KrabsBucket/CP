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
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int c00 = 0, c01  = 0, c11 = 0, c10 = 0;
    for(int i =0;i < n; i++)
    {
        if (a[i] == 0 && a[i] == b[i]) c00++;
        else if(a[i] == 1 && a[i] == b[i])c11++;
        else if(a[i] == 1 && a[i] != b[i])c10++;
        else c01++;
    }
    int c = 0;

    if (c10 == 0 && c01 == 0)
    {
        c = 0;
    }
    else if(c10 %2)
    {
        c = 1;
    }
    else if(c10 > 0)
    {
        c = 2;
    }
    else
    {
        if (c11 >0 && c00 > 0)
        {
            c = 2;
        }
        else
        {
            c = -1;
        }
    }
    cout << c << "\n";

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
