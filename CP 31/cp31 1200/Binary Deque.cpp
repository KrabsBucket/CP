#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
int n, s; cin >> n; cin >> s;
    vector<int> arr(n);

    int insum = 0;
    rep(i, 0 ,n)
    {
        cin >> arr[i];
        insum += arr[i];
    }

    if (s > insum)
    {
        cout << -1 << "\n";
        return;
    }
    
    int cur =0;
    int maxi =-1;
    int l = 0;

    for(int r= 0; r < n; r++)
    {   
        cur += arr[r];

        while(cur > s && l <= r)
        {
            cur -=arr[l];
            l++;
        }
        
        if (cur == s)
        {
            maxi = max(maxi, r- l+1);

        }



        
    }

    cout <<n - maxi << "\n";



    
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
