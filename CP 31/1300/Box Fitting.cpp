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
    int n, w; cin >> n>> w;
    vector<int> a(31);
    for(int i = 0;i < n; i++)
    {
        int x; cin >> x;
        int s = 0;
        while(s < 32)
        {
            if(x&(1<<s))
            {
                a[s]++;
                break;
            }
            s++;
        }
    }
    int h = 0;
    int c = 0;
    while(c < n)
    {
        int wid = w;
        for(int i =30; i >=0; i--)
        {
            while(a[i]>0 && wid >= 1<<i)
            {
                wid -= (1<<i);
                c++;
                a[i]--;

            }
        }
        h++;
    }
        

    cout << h << "\n";
    

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
