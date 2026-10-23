#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        
        bool flag = true;
        long long n ; cin >> n;
        long long l , r ; 
        cin >> l >> r ;
        vector<long long> arr(n, -1);
        for (long long i = n; i > 0 ; i--)
        {
            long long x = (l + i - 1) / i ;
            long long val = x * i ;
            if ( val <= r )
            {
                arr[i-1] = val ;
            }
            else 
            {
                flag = false;
                break;
            }
     
        }

        

        if ( flag )
        {
            cout << "YES\n";
            for ( long long i = 0; i < n; i++ )
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO\n";
        }






    }
}