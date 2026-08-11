#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    
    int n; cin >> n;
    if (n == 1)
    {
        cout << -1 << "\n";
        return;
    }
    vector<int> vec(n, -1);
    rep(i, 0, n-1)
    {
        int x,y;
        cin >> x >> y;
        if (vec[x-1] != -1)
        {
            cout << -1 << "\n";
            return;
        }
        vec[x-1] = (y-1);

    }

    rep(i, 0, n)
    {
        vector<int> idx(n, -1);
        int j = i;
        bool empty = false;
        while (!empty)
        {
            if(vec[j] == -1) empty = true;

            if(idx[j] != -1)
            {
                cout << -1 << "\n";
                return;
            }

            idx[j] = j;
            j = vec[j];

        }
    }

    rep(i, 0, n)
    {
        if (vec[i] == -1)
        {
            cout << i+1 << "\n";
            return;
        } 
            
    }






    

    
}

int main() {
    fastio;

   //  LOCAL TESTING: Use your global input file
    //freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);

    // USACO SUBMISSION: Uncomment these and change 'problemname'!
     freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    solve();

    return 0;
}
