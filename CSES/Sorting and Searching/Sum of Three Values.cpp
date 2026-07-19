#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {

    int n, x; cin >> n >> x;
    vector<pair<int,int>> vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i+1;
    }
    sort(vec.begin(), vec.end());
    if (n < 3 || (vec[0].first + vec[1].first + vec[2].first) > x)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    for(int i = 0; i < n-2; i++)
    {
        int m = x - vec[i].first;
        int j = i+1;
        int k = n-1;
            while(j < k)
            {
                if(vec[j].first + vec[k].first == m)
                {
                    cout << vec[i].second<< " "<< vec[j].second<< " " << vec[k].second<< "\n";
                    return;
                }
                else if (vec[j].first + vec[k].first < m)
                {
                    j++;
                }
                else
                {
                    k--;
                }


            }
            

            

    }
    cout << "IMPOSSIBLE\n";




    
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
