#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, x; cin >> n >> x;
    vector<int> vec(n);
    for(int i = 0; i < n;i++)
    {
        cin >> vec[i];
    }

    int i = 0;
    int j = 0;
    int c = 0;
    int m = 0;

    while(j < n)
    {
         if (vec[j] + m < x)
         {
             m += vec[j];
             j++;
         }
         else if(vec[j] + m == x)
         {
             c++;
             m -= vec[i];
             i++;
         }
         else
         {
             m -= vec[i];
             i++;
         }

    }

    cout << c << "\n";
    
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
