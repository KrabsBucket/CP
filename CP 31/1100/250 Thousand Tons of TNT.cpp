#include <bits/stdc++.h>
using namespace std;





int main()
{
    int T;
    cin>> T;
    while (T--)
    {

        int n;
        cin>> n;    
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>> arr[i];
        }   

        vector<int> factors = {1};
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                factors.push_back(i);
                if (i != n / i)
                    factors.push_back(n / i);
            }
        }

  
        long long diff = 0;
        long long sum_diff = 0;
        long long final_ans = 0;
        
        for (auto factor : factors)
        {
            long long maax = LLONG_MIN;
            long long miin = LLONG_MAX; 
            long long curr_sum = 0;
            for(int i = 0; i < n; i ++)
            {

                curr_sum += arr[i];
                
                if ( (i+1) % factor == 0)
                {
                    maax = max(maax, curr_sum);
                    miin = min(miin, curr_sum);
                    
                    curr_sum = 0;
                }
                
                
                
                
            }
            sum_diff = abs(maax - miin);
            diff = max(sum_diff, diff);
        }

        cout << diff << endl;



    }



}