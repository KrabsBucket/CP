#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    long long n; cin>>n;

    for (long long i = 0; i < (1 << n); i++) {
        long long val = i ^ (i >> 1);
        string s = bitset<16>(val).to_string();

        cout << s.substr(16 - n) << '\n';
    }
    
}


int main() {
    solve();
    fastio;
}
