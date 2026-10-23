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
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &x : a)
    {
        cin >> x;
        x*=2;
    }
    sort(a.begin(), a.end());

    ll lo = 0;
    ll hi = 2*1e9;
    ll ans = -1;
    while(lo <= hi)
    {
        ll r = lo+(hi-lo)/2;
        ll st = a[0];
        ll ed = a[n-1];
        ll xm = -1;
        bool fflg = true;
        ll rr = r;
        while(st <= ed)
        {
            rr = r;
            ll m = st + (ed-st)/2;
            bool flg = true;
            ll curr = m;
            int i = n-1;
            while(curr - rr > a[0])
            {
                while(i > 0 && a[i-1] >= curr- rr)
                {
                    i--;
                }
                if(a[i] >= curr || rr <= 0)
                {
                    flg = false;
                    break;
                }
                curr = a[i];
                rr -=2;
                
            }

            if(flg)
            {
                xm = m;
                st = m+1;
            }
            else
            {
                ed = m-1;
            }

        }
        rr = r;
        int i = 0;
        ll curr = xm;
        while(curr + rr < a[n-1])
        {
            while(i+1 < n && a[i+1] <= curr + rr)
            {
                i++;
            }

            if(a[i] <= curr || rr <= 0)
            {
                fflg = false;
                break;
            }

            curr = a[i];
            rr-=2;
        }

        if(fflg)
        {
            ans = r;
            hi = r -1;
        }
        else
        {
            lo = r+1;
        }

    }
    cout << fixed << setprecision(1) << ans/2.0 << "\n";




    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("angry.in", "r", stdin);
     freopen("angry.out", "w", stdout);

    solve();

    return 0;
}
