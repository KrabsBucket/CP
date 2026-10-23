#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, m; cin >> n >> m;
    vector<int> inf(m);
    rep(i,0, m)
    {
        cin >> inf[i];
    }
    
    sort(inf.begin(), inf.end());
    vector<int> diff(m);
    rep(i, 1, m)
    {
        diff[i-1] = inf[i] - inf[i -1] -1;
    }
    diff[m-1] = (n- inf[m-1]) + inf[0] - 1;
    int day = 0;
    int nfc = 0;
    sort(diff.rbegin(), diff.rend());
    rep(i, 0 ,m)
    {
        int check = diff[i] - 2*(day);
        if (check <= 0)
        {
            break;
        }
        if (check > 1)
        {
            nfc += check -1;
            day+=2;
        }
        else
        {
            nfc += check;
            day++;
        }

    }
    
    cout << n - nfc << "\n";
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
