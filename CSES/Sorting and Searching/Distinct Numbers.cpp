#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin>> n;
    vector<long long> sat(n);

    for(int i = 0; i < n; i++)
    {
        cin>> sat[i];

    }

    sort(sat.begin(), sat.end());

    sat.erase(unique(sat.begin(), sat.end()), sat.end());
    cout << sat.size() << "\n";

    

}

int main() {
    fastio;
    solve();
}