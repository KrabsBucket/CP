#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    vector<int> updated(n, 0);
    ll s = 0;
    rep(i, 0 ,n)
    {
        cin >> arr[i];
        s+= arr[i];

    }
    int t = 0;
    int count = 0;
    rep(r, 0, q)
    {
        int k; cin >> k;
        if (k ==1)
        {
            int i , x; cin >> i >> x;
            i--;
            if (count > updated[i])
            {

                s += (x - t);

            }
            else
            {
                s += (x - arr[i]);
            }
            arr[i] = x;
            updated[i] = count;
       }
            
        
        else
        {
            int x; cin >> x;
            s = (n*x);
            t = x;
            count++;
        }

        cout << s << "\n";
    }
    
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
