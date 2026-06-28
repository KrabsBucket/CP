#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin>> n;
    vector<long long> arr(n);
    long long moves = 0;
    cin>> arr[0];
    for (int i = 1; i< n; i++) {
        cin >> arr[i];
        if (arr[i] < arr[i-1]) {
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << moves << "\n";
}

int main() {
    fastio;
    int T = 1;
    while(T--) {
        solve();
    }
}