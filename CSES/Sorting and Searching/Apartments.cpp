#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n, m, k; cin >> n >> m >> k;

    vector<long long> desired(n);
    vector<bool> taken(n , false);

    vector<bool> taken_apart(m , false);
    for ( long long i = 0; i < n; i++)
    {
        cin>>desired[i];

    }

    vector<long long> aparts(m);
    for ( long long i = 0; i < m ; i++)
    {

        cin >> aparts[i];
    }
    int count = 0, i = 0, j = 0;

    sort(desired.begin(), desired.end());

    sort(aparts.begin(), aparts.end());

    while ( i < n && j < m)
    {
        if (aparts[j] >= desired[i] -k && aparts[j] <= desired[i] +k )
        {
            i++;
            j++;
            count++;
        }


        else if ( aparts[j] < desired[i] - k)
            j++;


        else 
            i++;

    }

    cout << count << "\n";

}

int main() {
    fastio;
        solve();
}