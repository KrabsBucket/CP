#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> pvec(n+1);
    vector<int> svec(n+2);
    rep(i, 0, n)
    {
        cin >> vec[i];
        pvec[i+1] = gcd(vec[i], pvec[i]);
    }

    for(int i = n; i > 0; i--)
    {
        svec[i] = gcd(svec[i+1],vec[i-1]);
    }

    int c = INT_MIN;
    rep(i, 1, n+1)
    {
        c = max(c, gcd(pvec[i-1], svec[i+1]));
    }

    cout << c << "\n";



}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    // freopen("problemname.in", "r", stdin);:
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
