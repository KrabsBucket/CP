#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin>> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++) 
    {cin>> a[i];
     cin>> b[i]; 
    }
    for(long long i=0;i<n;i++) 
    {
        long long sum = a[i] + b[i];
        if(sum % 3 == 0 && min(a[i], b[i]) * 2 >= max(a[i], b[i]))
        {
            cout<< "YES"<< '\n';
        }
        else
        {
            cout<< "NO"<< '\n';
        }
    }


    

    

    
    
}

int main() {
    fastio;

        solve();
    
}