#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        
        int n;
        cin >> n;
        vector<long long> a(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long s = a[0];
        if ( s != 1 ) {
            cout << "NO" << '\n';
            continue;
        }

        for (int i = 1; i < n; i++) {

            if ( a[i] > s  ) {
                flag = false;
                break;
            }

            s += a[i];  
            
    }

        if ( flag ) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }

    }
}