#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n, k; cin>> n >> k;
    vector<long long> arr(n);
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        long long target = arr[i] + k;
        if (binary_search(arr.begin() +i + 1, arr.end(), target))
        {
            cout << "YES\n";
            return;
        }
        

    }
    
    cout << "NO\n";


}

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        solve();
    }
}