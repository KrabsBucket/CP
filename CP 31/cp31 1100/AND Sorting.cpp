#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = -1;
        for (int i =0; i <n; i++)
        {
            if (arr[i] !=i)
            {
                ans &= arr[i];
    
            }

        }

        cout << ans << "\n";

       

          


        
        
    }
}