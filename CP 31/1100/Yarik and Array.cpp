#include <bits/stdc++.h>
using namespace std;


bool parityCheck(long long num, long long num1)
{
    if (abs(num % 2) != abs(num1 % 2))
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin>> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long max_sum = INT_MIN;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];  
            max_sum = max(max_sum, arr[i]);
        }

        long long sum = 0;
        
        for (int i = 0; i < n-1; i++) 
        {

            if (sum < 0)
            {
                sum = 0;
            }

            if (parityCheck(arr[i], arr[i+1]))
            {
                sum += arr[i];
                max_sum = max(max_sum, sum);
                if (i == n - 2) 
                {
                    sum += arr[i + 1];
                    max_sum = max(max_sum, sum);
                }
            } 

            else 
            {
                sum += arr[i];
                max_sum = max(max_sum, sum);
                sum = 0;
            }


        }


        cout << max_sum << endl;

        


    }



}