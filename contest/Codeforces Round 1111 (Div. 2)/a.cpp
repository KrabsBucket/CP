#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int n; cin >> n;
    int c1 = 0;
    int s = 0;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            c1++;
        }
        else
        {
            s++;
        }
    }
    if(n%2)
    {
        cout << "NO\n";
        return;
    }

    if(abs(n/2 - s)%2 == 0)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

    
     

     
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
