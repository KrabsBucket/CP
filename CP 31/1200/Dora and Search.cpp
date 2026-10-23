#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';


void solve() {
    int n; cin >> n;
    vector<int> num(n);

    rep(i, 0, n)
    {
        cin >> num[i];
    }

    int i = 0;
    int j = n-1;
    int mini = 1;
    int maxi = n;




    while (i <=j )
    {
        int l = mini;
        int r = maxi;
        if (num[i] == mini || num[i] == maxi )
        {
            if (num [i] == mini)
            {
             mini++;
            }
            if (num[i] == maxi)
            {
            maxi--;
            }
            i++;
        }

        if (num[j] == mini || num[j] == maxi)
        {

            if (num [j] == mini)
            {
             mini++;
            }
            if (num[j] == maxi)
            {
            maxi--;
            }

            j--;
        }
        if(l == mini && r == maxi)
        {
            break;
        }


    }

        if (j - i > 2)
        {
            cout << i+1 << " " << j+1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }


    
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
