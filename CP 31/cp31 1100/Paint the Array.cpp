#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin>>n;
    vector<long long> arr(n);
    for (int i =0; i < (n); i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "0\n";
        return;

    }
    long long gcd1 = arr[0];
    long long gcd2 = arr[1];

    for (int i = 2; i < n ; i++)
    {

        if (gcd1 > 1 && i%2 == 0)
            {
                gcd1 = gcd(gcd1, arr[i]);
            }

        if (gcd2 > 1 && i%2 == 1)
            {
                gcd2 = gcd(gcd2, arr[i]);
            }


        if (gcd1 == gcd2)
        {
            cout << "0\n";
            return;

        }        

    }
    if (gcd1 > 1)
    {
        for (int i = 1; i < n; i+=2)
        {
            if (arr[i] % gcd1 == 0)
            {
                gcd1 = 1;
                break;
            }

        }
    }

    if (gcd2 > 1)
    {
        for (int i = 0; i < n; i+=2)
        {
            if (arr[i] % gcd2 == 0)
            {
                gcd2 = 1;
                break;

            }

        }
    }
    
        if (gcd1 == gcd2)
        {
            cout << "0\n";
            return;

        } 


        cout << max(gcd1, gcd2) << "\n";




    
}

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        solve();
    }
}