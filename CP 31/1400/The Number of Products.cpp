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
    vector<int> arr(n+1, 1);
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        int c = (x > 0 ? 1 : -1);
        arr[i] = arr[i-1]*c;
    }
    ll cntp = 1;
     ll cntn = 0;
     ll neg = 0;
    ll pos = 0;
    for(int i = 1; i <= n ; i++)
    {
        if(arr[i] ==1 )
        {
            pos += cntp;
            neg += cntn;
            cntp++;
        }
        else
        {
            pos += cntn;
            neg+= cntp;
            cntn++;
        }

    }
    cout << neg << " " << pos << "\n";


    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

        solve();

    return 0;
}
