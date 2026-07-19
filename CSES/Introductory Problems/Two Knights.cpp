#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        long long r = i*i;
        long long total = (r*(r-1))/2;
        long long attack = 4*(i-1)*(i-2);
        cout << total - attack << "\n";
    }

}

int main() {
    fastio;
        solve();
}