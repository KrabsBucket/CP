#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n ; cin >> n;
    vector<long long> wght(n);

    long long maxxx = 0;
    long long sam = 0;
    for (int i = 0; i<n ; ++i)
    {

        cin>> wght[i];

        sam += wght[i];

        maxxx = max(wght[i], maxxx);
    }

    sam -= maxxx;

    sort(wght.begin(), wght.end());


    int i = 0;

    long long min_diff = INT_MAX;
    while(i < n-1)
    {

        long long diff = 0;
        diff = abs(maxxx - sam);

           { maxxx += (wght[i]);
            sam -= (wght[i]);
           }


        min_diff = min(min_diff, diff);

        i++;

    }


    cout << min_diff <<"\n";






}

int main() {
    fastio;
        solve();
}