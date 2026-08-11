#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 998244353;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    bool ev = true;
    bool od = true;
    int le = -1;
    
    for(int i = 0; i < n; i+=2)
    {
        if(s[i] != '?')
        {
            ev = false; 
            if(le != -1)
            {


                int st = (i - le) / 2;
                if((st % 2 != 0 && s[i] == s[le]) || (st % 2 == 0 && s[i] != s[le])) 
                {

                    cout << 0 << "\n";
                    return;
                }
            
            }


            le = i;

        }
    }
    
    int lo = -1;
    for(int i = 1; i < n; i+=2)
    {

        if(s[i] != '?')
        {
            od = false; 
            if(lo != -1)
            {
                int st = (i - lo)  / 2;
                if((st % 2 != 0 && s[i ] == s[lo ]) || (st % 2 == 0 && s[i] != s[lo])) 
                {
                    cout << 0 << "\n";
                    return;
                }
            }
            lo = i;
        }
    }
    
    if ( !od && ! ev)
    {
        cout << 1 << "\n";
    }
    else if(!od || !ev)
        {
            cout << 2 << "\n";
        }
    else
    {
        cout << 4 << "\n";
    }
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
