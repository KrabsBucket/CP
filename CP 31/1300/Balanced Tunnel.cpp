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
    vector<int> in (n);
    vector<int> out(n);
    vector<bool> chk(n+1, false);
    for(int &x : in)
    {
        cin >> x;
    }
    for(int &x : out)
    {
        cin >> x;
    }
    int c = 0;
    int i = 0;
    int j = 0;
    while(i < n || j < n)
    {
        if(chk[in[i]])
        {
            i++;
            continue;
        }
        if(chk[out[j]])
        {
            j++;
            continue;
        }
        if(in[i] == out[j])
        {
            chk[in[i]] = true;
            i++;
            j++;
        }
        else if(out[j] != in[i])
        {
            c++;
            chk[out[j]] = true;
            j++;
        }
    }


    cout << c << "\n";

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
