#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> arr;
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    arr.push_back(a[0]);
    
    rep(i, 1 ,n)
    {
        if( a[i] != a[i-1])
        {
            arr.push_back(a[i]);
        }
    }

    n = arr.size();

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    else if (n==2)
    {   
            cout << 2 << "\n";
            return;
    }

    vector<int> output = {arr[0]};

    if (n > 2 ) 
    {
    rep(i, 1, n-1)
        {
            if (arr[i] > arr[i-1] && arr[i+1] < arr[i] )
            {
                output.push_back(arr[i]);
            }

            else if (arr[i] < arr[i-1] && arr[i] < arr[i+1])
            {
                output.push_back(arr[i]);
            }
        }
    }
        
    

    output.push_back(arr[n-1]);
    cout << output.size() << "\n";
    


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
