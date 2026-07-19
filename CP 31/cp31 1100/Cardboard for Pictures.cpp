#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, c;
        cin >> n >> c;

        long long alpha = 0;
        long long beta = 0;
        vector<long long> arr(n);
        
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            alpha += arr[i];
            beta += arr[i] * arr[i];
        }

        __int128_t n_128 = n;
        __int128_t c_128 = c;
        __int128_t alpha_128 = alpha;
        __int128_t beta_128 = beta;

        __int128_t alpha_sq = alpha_128 * alpha_128;
        __int128_t term2 = n_128 * (c_128 - beta_128);
        __int128_t num = alpha_sq + term2;

        long long root = (long long)sqrt((long double)num);
        long long w_calc = (root - alpha) / n;
        
        cout << w_calc / 2 << "\n";
    }
}

*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long low = 1, high = 1e18;
        long long ans = -1;
        while (low <= high)
        { 
            long long mid = low + (high - low) / 2;

            long long current_area = 0;
            for (long long i = 0; i < n; i++)
            {
                long long side = arr[i] + 2 * mid;
                if (side > 2e9)
                {
                    current_area = c + 1;
                    break;
                }
                current_area += side * side;
                if (current_area > c)
                {
                    break;
                }
                    
            }
            if (current_area == c)
            {
                ans = mid;
                break;
            }
            else if (current_area < c)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

        }


        cout << ans << "\n";

            
    }

    

}




