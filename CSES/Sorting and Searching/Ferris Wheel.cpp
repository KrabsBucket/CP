#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n, x; cin >> n >> x;

    vector<long long > wght(n);
     

    for ( int i = 0; i < n ; i++)
    {


        cin >> wght[i];

    }


    sort(wght.begin(), wght.end());

    int i = 0, j = n-1;

    int gandola_count = 0;

    while ( i <= j)
    {

        if ( wght[i] + wght[j] <= x && i != j)
            {
                gandola_count++;

                i++;
                j--;
            }

        else
            {
                gandola_count++;
                j--;


            }

    }


    cout << gandola_count << "\n";






}

int main() {
    fastio;
        solve();
}