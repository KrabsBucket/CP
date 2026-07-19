#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, t; cin >> n >> t;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    

    int s = 0;
    int i = 0;
    int j = 0;
    int m = 0;
    while(j < n)
    {
        if (m + arr[j] <= t)
        {
            m += arr[j];
            j++;
        }
        else
        {
            m -= arr[i];
            i++;
        }


        s = max(s, j-i);
        
    }

    cout << s << "\n";
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}
