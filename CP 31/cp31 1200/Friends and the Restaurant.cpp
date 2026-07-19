#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >>n;
    vector<int> buy(n);
    vector<int> spd(n);

    rep(i, 0, n)
    {
        cin >> buy[i];
    }
    rep(i, 0, n)
    {
        cin >> spd[i];
        spd[i] -= buy[i];
    }
    sort(spd.begin(), spd.end());

    int i = 0;
    int j = n-1;
    int days = 0;
    while (i <j )
    {
        if((spd[i] + spd[j]) >= 0)
        {
            days++;
            i++;
            j--;
        }
        else
        {
            i++;
        } 
    
    }

    cout << days << "\n";
    
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
