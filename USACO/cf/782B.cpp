#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    vector<double> cords(n);
    vector<double> speed(n);

    double hi = INT_MIN;
    double lo = INT_MAX;
    rep(i, 0, n)
    {
        cin >> cords[i];
        hi = max(cords[i], hi);
        lo = min(cords[i], lo);

    }
    rep(i, 0, n)
    {
        cin >> speed[i];
    }

    double eps = 1e-7;
    double soln = INT_MIN;

    for (int iter= 0; iter < 100; iter++)
    {
        double m1 = lo + (hi - lo)/3;
        double m2 = hi - (hi - lo)/3;

        double f1 = INT_MIN;
        double f2 = INT_MIN;
        rep(i, 0, n)
        {
            f1 = max(f1, (abs(m1 - cords[i]))/speed[i]);
            f2 = max(f2, (abs(m2 - cords[i]))/speed[i]);
        }

        if (f1 < f2)
        {
            hi = m2;
        } 
        else
        {
            lo = m1;
        }

    }

    rep(i, 0, n)
    {
       soln = max(soln, (abs(hi - cords[i]))/speed[i]);
    }

    cout << fixed << setprecision(12) << soln << "\n";






    

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
