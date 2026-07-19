#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int > arr(n+1);
    unordered_map<ll, ll > mp;
    mp[0] = 1;
    string s; cin >> s;

    ll c = 0;
    for (int i = 1; i < n+1; i++)
    {
        arr[i] = arr[i-1] + s[i-1] - '0';
        ll s = arr[i] - i;
        c+=mp[s];
        mp[s]++;

    }
    cout << c << "\n";





    
}

int main() {
    fastio;


    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
