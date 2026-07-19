#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    long long n; cin>> n;

    long long r = (n*(n+1))/2;
    if (r % 2 != 0)
    {
        cout << "NO\n";
        return;
    }


    vector<long long> set1, set2;

    long long target = r / 2;

    for (long long i = n; i >= 1; i--)
    {
        if (i <= target)
        {
            set1.push_back(i);
            target -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    cout << "YES\n";
    cout << set1.size() << "\n";
    for (long long i = 0; i < set1.size(); i++)
    {
        cout << set1[i] << " ";
    }
    cout << "\n";
    cout << set2.size() << "\n";
    for (long long i = 0; i < set2.size(); i++)
    {
        cout << set2[i] << " ";
    }
    cout << "\n";

}

int main() {
    fastio;
        solve();
}