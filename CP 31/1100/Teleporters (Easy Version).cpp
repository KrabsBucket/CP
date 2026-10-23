#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
       int n, c;
       cin >> n >> c;
         
       vector<int> positions(n);
       for (int i = 0; i < n; ++i) {
           int x;
           cin >> x;
           positions[i] = x+1+i;
       }

        sort(positions.begin(), positions.end());

        long long total_cost = 0;

        for (int i = 0; i < n; ++i) {
            total_cost += positions[i];
            if (total_cost > c) {
                cout << i << '\n';
                break;
            }
            if (i == n-1) {
                cout << n << '\n';
            }
        }

        
    }
}