#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, q; cin >> n >> q;
    struct Up{
        ll r, l, v;
    };
    struct par{
        ll l, r;
    };
    int c =0 ;
    vector<Up> upd(n);
    vector<ll> sorted(2*(n+q));
    for(int i = 0; i < n; i++)
    {
        cin >> upd[i].l >> upd[i].r >> upd[i].v;
        sorted[c] = upd[i].l;
        sorted[c+1] = upd[i].r;
        c+=2;
    }
    vector<par> quer(q);
    for(int i = 0; i < q; i++)
    {
        cin >> quer[i].l >> quer[i].r;
        sorted[c] = quer[i].l;
        sorted[c+1] = quer[i].r;
        c+=2;
    }

    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    vector<ll> coords(sorted.size()+1);
    for(int i = 0; i < n; i++)
    {
        int sindx = lower_bound(sorted.begin(), sorted.end(),upd[i].l ) - sorted.begin();
        int eindx = lower_bound(sorted.begin(), sorted.end(),upd[i].r ) - sorted.begin();
        coords[sindx] += upd[i].v;
        coords[eindx] -= upd[i].v;

    }

    for(int i = 0; i < sorted.size(); i++)
    {

        coords[i+1] += coords[i];
    
    }
    
    vector<ll> pref(coords.size());
    for(int i = 0; i < sorted.size()-1; i++)
    {
        ll width = sorted[i+1] - sorted[i];
        ll area = coords[i]*width;
        pref[i+1] = pref[i] + area;
    }


    for(int i = 0; i < q; i++)
    {
        int sx = lower_bound(sorted.begin(), sorted.end(), quer[i].l)- sorted.begin();
        int ex = lower_bound(sorted.begin(), sorted.end(), quer[i].r)- sorted.begin();

        cout << pref[ex] - pref[sx] << "\n";


    }

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
