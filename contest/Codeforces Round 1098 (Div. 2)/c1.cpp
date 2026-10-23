#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
    ll a, n; cin >> a >> n;
    ll ex = a;
    vector<int> arr(n);
    for(auto &x : arr)
    {
        cin >> x;
    }
    vector<int> num;
    while(ex > 0)
    {
        num.push_back(ex%10);
        ex/=10;
    }
    ll p = 0;
    ll s = 0;
    for(int j = num.size()-1; j >= 0; j--)
    {
        int q = arr[0];
        int r = arr[n-1];
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= num[j])
            {
                q = max(q, arr[i]);
            }
            else
            {
                r = min(r, arr[i]);
            }

        }
        p*=10;
        p+=q;
        s*=10;
        s+=r;
        
    }
    p = abs(a - p);
    s = abs(a - s);
    ll q = 0;
    for(int i = 0; i < num.size()-1; i++)
    {
        q*=10;
        q+=arr[n-1];
    }

    ll r = 0;
    for(int i =0; i < num.size()+1; i++)
    {
        r*=10;
        r+=arr[0];
    }

    q = abs(a -q);
    r = abs(a - r);
    cout <<min({p,q,r,s}) << "\n";
    
    

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
