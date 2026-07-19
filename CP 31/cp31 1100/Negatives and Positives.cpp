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
        vector<int> arr(n);
        int negative_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] < 0) {
                negative_count++;
            }

        }

        long long minii = INT_MAX;
        long long ss = 0;
        if (negative_count % 2 == 0)
        {   for (int i = 0; i< n; i++)
            {

                long long x = abs(arr[i]);

                ss += x;
                minii = 0;

            }}
        else
        {    for (int i = 0; i< n; i++)
            {

                long long x = abs(arr[i]);

                ss += x;

                minii = min(minii, x);

            }}
        cout << ss - 2*minii << '\n';



    }
}