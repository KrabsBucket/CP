#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
       int n, k;
       cin >> n >> k;
       vector<vector<int>> grid(n, vector<int>(n));
       vector<vector<int>> res(n, vector<int>(n, 0));
       for (int i = 0; i < n; i++) 
       {
            for (int j = 0; j < n; j++) 
            {
                int x;
                cin >> x ;
                grid[i][j] = x;
                res[n - i -1][n - j -1] = x;

            }
        }
        int count = 0;
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (grid[i][j] != res[i][j]) 
                {
                    count++;
                }
            }
        }

        count /= 2;
        if (count > k) {
            cout << "NO" << '\n';
        }
        else {
            if (n % 2 == 0) {
                if ((k - count) % 2 == 0) {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
            } 
            else {
                cout << "YES" << '\n';
            }
        }
         



    }  
}