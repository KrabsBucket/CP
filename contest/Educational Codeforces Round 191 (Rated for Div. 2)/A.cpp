#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
     
    int n,x,y,z; cin >>n>> x >> y >> z;
    int s1, s2; 


    s1 = n/(x+y);
    if (n % (x+y) != 0)
    {
        s1+=1;
    }

    int c = (x*z);
    int t = n-c;
    s2 = t/(x+10*y);
    if (t % (x + 10*y) !=0)
    {
        s2+=1;
    }
    s2+=z ;
        


    int ans = min(s1, s2);
    cout << ans <<"\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
