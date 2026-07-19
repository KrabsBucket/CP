#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        
        int n , k;
        cin >> n >> k;
        n *= n;
        vector<int> s(n);
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> s[i];
        }

        
        int mismatch = 0;

        for ( int i = 0 ; i < n / 2 ; i++ ) {
            if ( s[i] != s[n - i - 1] ) {
                mismatch++;
            }
        }   

        if (mismatch > k)
        {
            cout << "NO" << '\n';   

        }

        if (mismatch == k) 
        {
            cout << "YES" << '\n';   
        } 
        else if (mismatch < k) 
        {
            if ( (k - mismatch) % 2 == 0 || n % 2 == 1 ) 
            {
                cout << "YES" << '\n';   
            } 
            else 
            {
                cout << "NO" << '\n';   
            }
        }
    }
}