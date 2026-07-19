#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--)      
    {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }   
        vector<int> p_arr(n);
        vector<int> s_arr(n);
        p_arr[0] = arr[0];
        s_arr[n-1] = arr[n-1];

        for (int i = 1; i< n; i++)
        {
            p_arr[i] = arr[i] + p_arr[i-1];
            s_arr[n-i-1] = s_arr[n-i] + arr[n-i-1];

        }
        int ans = 0;

        for (int i = 0; i < n; i++)
        {   
            int target = p_arr[i];
            int start = i+1;
            int end = n-1;
            while (start <= end)
            {
                
                int mid = (start + end)/2;
                
                if (target == s_arr[mid])
                {
    
                    ans = max(ans, (i-mid+n+1));
                    break;
                }

                else if (target <  s_arr[mid])
                        start = mid +1 ;
                
                else if (target > s_arr[mid])
                        end = mid -1 ;

            }
        }
            cout << ans << "\n";


    }
}