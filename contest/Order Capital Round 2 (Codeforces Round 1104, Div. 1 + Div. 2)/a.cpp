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
    
    rep(i, 0, n)
    {
        int j = i+1;
        while( j < n )
        {
            if (arr[j] > arr[i])
            {
                arr[j] = arr[i];
            }
            else
            {
                break;
            }
            j++;

        }
    }

    rep(i , 0, n)
    {
        count+= arr[i];
    }
    cout << count<< "\n";
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
