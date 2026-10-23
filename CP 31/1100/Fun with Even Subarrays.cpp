#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    int doubles = 0;
    int main = arr[n-1];
    int count = 0;
    int end = n;
    while (true)
    {
        if( end <= 0)
        {
            cout << doubles << "\n";
            return;

        }

        for (int i = end-1; i > -1 ; i--)
        {
            if (arr[i] == main)
            {
                count++;
            }
            else
                break;

        }
        if (count >= n)
        {
            cout << doubles << "\n";
            return;

        }

        count *= 2;
        end = n - count;
        doubles++;

    }

}

int main() {
    fastio;
    int T; cin >> T;
    while(T--) {
        solve();
    }
}