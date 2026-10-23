#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    int count = 0;

    rep(i, 0 ,n)
    {
        int s_j = (((n-1+i+2)/arr[i]) * arr[i]) - i -2 ;

        for(int j = s_j; j > i; j -=arr[i])
        {
            if (arr[j] == ((i + j + 2)/arr[i]))
            {
                count++;
            }
        }

    }

    
    cout << count << "\n"; 
    
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
