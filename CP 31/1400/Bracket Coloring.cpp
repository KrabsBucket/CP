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
    int c = 0;
    string s; cin >> s;
    vector<int> arr(n);
    bool pos = 0;
    int one = 0;
    int two = 0;
    for(int i = 0; i <n; i++)
    {
        c += ((s[i] == ')') ? 1 : -1);
        if(c > 0)
        {
            pos = 1;
        }
        else if(c < 0)
        {
            pos = 0;
        }
        if(pos)
        {
            arr[i] = 1;
            one = 1;
        }
        else
        {
            arr[i] = 2;
            two = 1;
        }
    }

    if(c)
    {
        cout << -1 << "\n";
        return;
    }

    if(one &&  two)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }
    
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] == arr[0])
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
    cout << "\n";

    
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
