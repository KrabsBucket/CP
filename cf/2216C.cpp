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
    int n,k,p,q;cin >> n >> k >> p >>q;
    vector<int> arr(n), idl(n), C(n), D(n);
    ll s = 0;
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
        idl[i] = min((arr[i]%p) , (arr[i]%q));
        s += idl[i];
        C[i] = arr[i]%p - idl[i];
        D[i] = (arr[i]%q)%p- idl[i];
    }

    int i = 0, j= 0;
    ll s1 = INF ;
    ll x = 0;
    while(j < n)
    {
        if(j < (k))
        {
            x+=(C[j]);
            j++;
            continue;
        }

        s1 = min(x, s1);
        x -= C[i];
        x += C[j];
        i++;
        j++;
    }
    
    s1 = min(x, s1);
     i = 0, j= 0;
    ll s2= INF;
     x = 0;
    while(j < n)
    {
        if(j < (k))
        {
            x+=(D[j]);
            j++;
            continue;
        }

        s2 = min(x, s2);
        x -= D[i];
        x += D[j];
        i++;
        j++;
    }
        s2 = min(x, s2);

    cout << s + min(s1, s2) << "\n";






    
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
