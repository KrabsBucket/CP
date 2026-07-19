#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
     
    int n; cin >> n;
    vector<unsigned int> arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    vector<unsigned int> check = {arr[0]};

                
    rep(i, 1, n)
    {

        auto it = upper_bound(check.begin(), check.end(), arr[i]-1);
        
        if (it != check.begin() && *prev(it) == arr[i]-1)
        {
            *prev(it) = arr[i];
        }

        else
        {
            check.push_back(arr[i]);
        }

    }


    cout << check.size() << "\n";
        




                
    
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
