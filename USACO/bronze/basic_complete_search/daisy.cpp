#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    ll s = 0;
    rep(i, 0, n)
    {
        cin >> a[i];
        s+=a[i];
    
    }


    int c = 0;
    rep(i, 0, n)
    {
        rep(j, i, n)
        {
            int s = 0;
            rep(k, i, j+1)
            {
                s+=a[k];
            }

            double avg = (double)s/(j-i+1);

            bool present = false;
            rep(k, i, j+1)
            {
                if (a[k] == avg)
                {
                    present = true;
                    break;
                }
            }
            
            if (present)
            {
                c++;
            }


        }
    }
    cout << c << "\n"; 
}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    solve();

    return 0;
}
