#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> wght(2*n);
 
    rep(i, 0, 2*n)
    {
        cin >> wght[i];
    }
     
    sort(wght.begin(), wght.end());


    int m = INT_MAX;
    rep(i, 0 , 2*n)
    {
        rep(j, i+1, 2*n)
        {

            vector<int> temp;
            rep(k, 0 , 2*n)
            {
                if (k !=i && k != j)
                {
                    temp.push_back(wght[k]);
                }
            }

            int diff = 0;

            for (int k = 0; k < temp.size(); k+=2)
            {
                diff += temp[k+1] - temp[k];
            }

            m = min(m, diff);

        }
        
    }
    cout << m << "\n";
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
