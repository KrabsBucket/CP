#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n ; cin >> n;
    vector<pair<char,int>> a(n);

    rep(i, 0, n)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }
int m = INT_MAX;
    
    rep(i, 0, n) 
    {
        int candidate_pos = a[i].second; 
        int c = 0;
        
        rep(j, 0, n) 
        {
            if(a[j].first == 'G' && candidate_pos < a[j].second)
            {
                c++;
            }
            if(a[j].first == 'L' && candidate_pos > a[j].second)
            {
                c++;
            }
        }
        m = min(m, c);
    }
    cout << m << "\n";


}


int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
     //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}
