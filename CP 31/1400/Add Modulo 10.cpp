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
    int notsame = 0;
    int flag = 0;
    for(auto &x : a)
    {
        cin >> x;
        if(x%2)
        {
            x+=(x%10);
        }
        if(x%10 == 6)
        {
            x+=6;
        }
    }
    for(int i =0; i < n; i++)
    {
        if(a[i] != a[0] )
        {
            notsame = 1;
        }
        if(a[i]%10 == 0)
        {
            flag = 1;
        }
    }
    if(!notsame)
    {
        cout << "Yes\n";
        return;
    }
    if(notsame && flag )
    {
        cout << "NO\n";
        return;
    }
    int x = 0;
    for(int i = 0; i< n; i++)
    {
        int y = a[i];
        y-= (a[i]%10);
        if(y%20==0)
        {
            x+=1;
        }


    }
    cout << (min(x,n-x) == 0 ? "Yes\n" : "No\n"); 



    
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
