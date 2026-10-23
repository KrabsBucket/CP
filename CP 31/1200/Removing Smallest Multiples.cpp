#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    string s = "2";
    string t;
    cin >> t;
    s.append(t);
    vector<bool> arr(n+1, false);

    ll cost = 0;
    for (int i = 1; i <= n ; i++)
    {
        if (s[i] == '0')
            {
                    
        for(int j = i; j <= n; j+=i)
            {
                if (s[j] == '1')
                {
                    break;
                }
                if (!arr[j])
                {
                    cost += i;
                   arr[j] = true;
                }
            }
            }

    }
    

    cout << cost << "\n";



    
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
