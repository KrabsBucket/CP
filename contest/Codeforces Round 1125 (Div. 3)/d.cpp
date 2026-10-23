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
    struct ins{
        ll a, b, c;
    };

bool bs(const vector<ins>& arr, ll k, ll mid)
{
    ll ps = 0;
    for(const auto& x : arr)
    {
        ll a = x.a;
        ll b = x.b;
        ll c = x.c;

        ll s = a+b+c;
        if(mid <= s)
        {
            continue;
        }
         
        if(a == b && b == c) return false;

        ll ct = mid - s;
        if(a <= b && b<= c)
        {
            ll p = (a < c) ? 1LL*(b-a+1) : INF;
            ll q = (a < b) ? 1LL*(c -  b+1) : INF;
            ct += min(2*p, 2*q);
        }
        if(ct > k-ps )
        {
            return false;

        }
        ps += ct;
    }

    return true;
}

void solve() {
    int n; cin >> n;
    ll k; cin >> k;
    vector<ins> arr(n);
    vector<pair<ll, int>> data(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
        data[i].first = (arr[i].a + arr[i].b + arr[i].c);
        data[i].second = i;
    }

    ll lo = -3e9;
    ll hi = 2e18;
    ll ans = lo;
    while(lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(bs(arr, k , mid))
        {
            ans = mid;
            lo = mid+1;

        }
        else
        {
            hi = mid -1;
        }

    }
    cout << ans << "\n";

    









    
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
