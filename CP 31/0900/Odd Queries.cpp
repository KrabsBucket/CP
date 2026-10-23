#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main(){
    
    int t, n, q, l, r;
    long long k; // k can be big, use long long
    cin >> t;
    while(t--) {
        cin >> n >> q;
        vector<long long> array; // use long long for big values
        vector<int> lv;
        vector<int> rv;
        vector<long long> kv;
        
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            array.push_back(x);
        }

        for (int i = 0; i < q; i++) {
            cin >> l >> r >> k;
            lv.push_back(l);
            rv.push_back(r);
            kv.push_back(k); 
        }

        // build prefix sums
        vector<long long> prefix(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + array[i-1];
        }

        long long sum_array = prefix[n];
        
        for (int i = 0; i < q; i++) {
            l = lv[i];
            r = rv[i];
            k = kv[i];

            // O(1) range sum using prefix
            long long sum_slice = prefix[r] - prefix[l-1];
            long long replace = k * (r - l + 1);
            long long new_sum = sum_array - sum_slice + replace;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }
}
