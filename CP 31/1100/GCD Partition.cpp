#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    long long T; cin >> T;
    while(T--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        cin >> arr[0];
        for (int i = 1; i < n; ++i) {
            cin >> arr[i];
            arr[i] += arr[i-1]; 
        }
        
        long long max_gcd = 0;
        for (int i = 0; i <n-1; i++)
        {
            max_gcd = max(max_gcd, gcd(arr[i], arr[n-1] - arr[i]));
        }

        cout << max_gcd << '\n';
    }
}