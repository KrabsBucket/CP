#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';


void perm(int k, int n, vector<int>& vec, vector<int>& subset, ll s, ll& diff)
{


    if(k == n)
    {
        ll r = 0;
        rep(i, 0,(int) subset.size())
        {
            r += vec[subset[i]];
        }
       ll cd  = abs (2*r - s);

       diff  = min(cd, diff);
    }
    else
    {
        perm(k+1,n, vec, subset, s, diff);
        subset.push_back(k);
        perm(k+1, n, vec, subset, s, diff);
        subset.pop_back();
        
    }
}




void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    vector<int> subset;
    ll s = 0;


    rep(i, 0, n)
    {
        cin >> vec[i];
        s+= vec[i];

    }
    ll diff = 1e18;

    perm(0, n, vec, subset, s, diff);

    cout << diff << "\n";


    
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);


    solve();

    return 0;
}
