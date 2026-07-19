#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';
const int MOD = 1e9 + 7;
int main() {
    fastio;

    long long T; cin >> T;
    while(T--) {

        long long n; cin >> n;
        vector<long long> arr(n);
        vector<long long> arr1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> comp(n);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
        long long x = 0;
        cin >> arr1[i];
        }
        
       sort(arr1.begin(), arr1.end());
       
       int i = 0;
       int j = 0;
       while (i < n && j < n)
       {
        if (arr[i] > arr1[j])
        {
            j++;

        }

        else
        {
            comp[i] = n- j;
            i++;

        }
       }
       


        
        if (comp[0] == n )
        {
            cout << "0\n";
            continue;

        }

        long long ans = 1;

        for (int i = 0; i < n; i++)
        {
            ans = (ans * (n - comp[i] - i)) % MOD;
        }

        cout << ans << '\n';
        
    }
}