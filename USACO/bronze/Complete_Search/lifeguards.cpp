#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> vec(n);
    vector<int> time(1001);
    rep(i, 0, n)
    {
        cin >> vec[i].first >> vec[i].second;
    }


    int t = 0;

    rep(i, 0, n)
    {
            
        int c = 0;
        rep(j, 0, 1001)
        {
            rep(k, 0, n)
            {
                if(k == i)
                {
                    continue;
                }
                if(vec[k].first == j)
                {
                    c+=1;
                }
                if(vec[k].second== j)
                {
                    c-=1;
                }
            }
            time[j] = c;
        }

        int k = 0;
        rep(j, 0, 1001)
        {
            if(time[j] != 0)
            {
                k++;
            }
        }

        t = max(k, t);



    }

    cout << t <<"\n";




}

int main() {
    fastio;

    // LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("lifeguards.in", "r", stdin);
     freopen("lifeguards.out", "w", stdout);

    solve();

    return 0;
}
