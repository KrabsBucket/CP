#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    set<int> s;
    rep(i, 0, n)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    if (s.size() == 1)
    {
        cout << "NO\n";
        return;
    }
    

    
    int j = 0;
    rep(i, 0, n)
    {
        if (arr[i] != arr[0])
        {
            j = i;
            break;
        }
    }
    cout << "YES\n";

    rep(i, 0, n)
    {
        if (arr[i] != arr[0] && i != j)
        {
            cout << 1 <<" " << i+1 <<"\n";
        }
        else if(arr[i] == arr[0] )
        {
            cout << j+1 << " "<< i+1 << "\n";
        }
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
