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
    vector<pair<ll,int>> vec(n);
    for(int i=0; i < n;i++)
    {
        cin >> vec[i].first;
        vec[i].second = i+1;
    }
    for(int i=0; i < n;i++)
    {
        int x;
        cin >> x;
        vec[i].first -= x;
    }

    sort(vec.rbegin(), vec.rend());

    int c = 1;
    for(int i = 1; i < n; i++)
    {
        if(vec[i].first == vec[0].first)
        {
            c++;
        }
        else
        {
            break;
        }
    }

    cout << c << "\n";
    for(int i = c-1; i >= 0 ; i--)
    {
        cout << vec[i].second<< " ";
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
