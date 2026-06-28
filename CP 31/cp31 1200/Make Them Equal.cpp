#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void  solve() {
    
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    bool flag = true;
    rep(i , 0, n)
    {
        if (s[i] != c)
        {
            flag = false;
            break;
        }

    }
    if (flag)
    {
        cout << 0 << "\n";
        return;
    }

    if (s[n-1] == c)
    {
        cout << 1 << "\n";
        cout << n << "\n";
        return;
    }

    rep(i, n/2, n)
    {
        if (s[i] == c)
        {
            cout << 1 << "\n";
            cout << i+1 << "\n";
            return;
        }
    }

    cout << 2 << "\n";
    cout << 2 <<" " ;
    if (n%2 != 0)
    {
        cout << n << "\n";
    }
    else
    {
        cout << n-1 << "\n";
    }

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
