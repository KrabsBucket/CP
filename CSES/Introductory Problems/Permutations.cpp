#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    long long n; cin >> n;
    if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    for (int i = n-1; i > -1; i -= 2)
    {
        if (i == 0) continue;
        cout << i << " ";
    }

    for (int i = n; i > -1; i -= 2)
    {
        if (i == 0) continue;
        cout << i << " ";
    }

    cout << "\n";
}

int main() {
    fastio;
    int T = 1; 
    while(T--) {
        solve();
    }
}