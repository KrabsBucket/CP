#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';
 
void solve() {
    int n; cin >> n;
    vector <int> a(n);
 
    rep(i, 0, n)
    {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    long long  cur = 0;
    rep(i, 0, n)
    {
        if (a[i] <= cur + 1)
        {
             cur += a[i];
        }

        else
        {
            cout << cur+1 <<"\n";
            return;
        }
    }
    cout << cur + 1 << "\n";
    
}
 
int main() {
    fastio;
 
 
    solve();
 
    return 0;
}
