#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() 
{
    
    int n; cin >> n;
    vector<ll> arr(n);

    rep(u, 0 , n)
    {
        cin >> arr[u];
    }
    
    vector<vector<ll>> matrix = {{arr[0]}};
    ll i = 1; 
    while (i < n)
    {
        if (arr[i] > matrix[0].back())
        {
            matrix[0].push_back(arr[i]);
        }

        else if (arr[i] < matrix[matrix.size()-1].back())
        {
            matrix.push_back({arr[i]});
        }

        else
        {
            ll start = 1;
            ll end = matrix.size()-1;

            while (true)
            {
                ll mid = start + (end - start) /2;
                if (matrix[mid].back() > arr[i])
                {
                    start = mid +1;
                }
                else if (matrix[mid-1].back() < arr[i])
                {
                    end = mid -1;
                }
                else
                {
                    matrix[mid].push_back(arr[i]);
                    break;
                }
               
            }

            
        }

        i++;

        
    }
    rep(i, 0 ,matrix.size())
    {
        rep(j, 0 ,matrix[i].size())
        {
            cout << matrix[i][j] << " ";

        }
        cout << "\n";
    }

}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif
        {
            
        solve();
    }

    return 0;
}
