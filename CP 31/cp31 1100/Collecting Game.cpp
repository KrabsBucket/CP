#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin >> n;
        
        vector<long long> soln(n);
        unordered_map <long long, int> mp;
        long long result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> soln[i];
            result += soln[i];
            mp[soln[i]] = 0;
        }
        

        vector<long long> vec = soln;
        sort(vec.begin(), vec.end(), greater<long long>());

        int r = 0;

        mp[vec[0]] = n-1;
        for (int i = 0; i < n-1; i++)
        {
            result -= vec[i];
            if (result < vec[i])
                r = i+1;

            mp[vec[i+1]] = max(mp[vec[i+1]], n-1-r);
        }
        for (int i = 0; i < n; i++)
        {
            cout << mp[soln[i]] << " ";
        }

        cout << "\n";

    }
    

}