#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    long long n; cin>> n;
    long long count = 0;
    while (n>0){
        n/=5;
        count +=n;

    }


    cout << count << "\n";

}

int main() {
    fastio;
        solve();
}