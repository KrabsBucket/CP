#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n;
    cin >> n;
    vector<long long> row(n);
    vector<long long> col(n);
    for (int i = 0; i < n; i++)
    {
        cin >> row[i] >> col[i];

    }

    for (int i = 0; i < n; i++)
    {
        long long layer = max(row[i] , col[i]);
        if (row[i] == col[i])
        {
            cout << layer * layer - layer + 1 << "\n";
            continue;

        }

        if (layer % 2 == 0)
        {
            if (row[i] == layer)
            {
                cout << layer * layer - (col[i] - 1) << "\n";
            }
            else
            {
                cout << (layer - 1) * (layer - 1) + row[i] << "\n";
            }
        }
        else
        {
            if (col[i] == layer)
            {
                cout << layer * layer - (row[i] - 1) << "\n";
            }
            else
            {
                cout << (layer - 1) * (layer - 1) + col[i] << "\n";
            }
        }
    }



    
}

int main() {
    fastio;
    int T= 1;
    while(T--) {
        solve();
    }
}