#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {
        
        int n; cin >> n;
        vector<int> arr(n);
        cin >> arr[0];

        int r = 0; 
        for (int i =1 ; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == arr[0])
            {
               r+=1; 
            }
            
        }
        if (r == n-1)
        {
            cout << 0 << '\n';
            continue;
        } 
        
        vector<int> res;
        for (int i = 0; i < n/2 ; i++)
        {

            res.push_back(abs(arr[i]- arr[n-i-1]));
        }


        int result = res[0];
        for (auto x : res)
        {
            result = gcd(result, x);
            if (result == 1)
            {
                break;
            }   
        }

        cout << result << '\n';


    }
}