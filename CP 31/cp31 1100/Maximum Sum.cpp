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

        vector<int> arr(n);
        vector<long long> prefix_sum(n+1, 0);
        vector<long long> suffix_sum(n+1, 0);
        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
     
        }

        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            prefix_sum[i+1] = prefix_sum[i] + arr[i];
            suffix_sum[i+1] = suffix_sum[i] + arr[n-1-i];
        }
        long long result = INT_MIN;


        for (int i = 0; i <= k; i++)
        {
            long long current = prefix_sum[n] - prefix_sum[2*(k-i)] - suffix_sum[i];
            result = max(result, current);

        }

        cout << result << '\n';


    }

}


