#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        unordered_map<long long, long long> a_sub;
        unordered_map<long long, long long> b_sub;
        
        for (long long i = 0; i< n; i++)
        {
            cin>> a[i];
        }
        for (long long i = 0; i< n; i++)
        {
            cin>> b[i];
        }
        
        if (n > 0)
        {
            long long x = a[0];
            long long count = 0;
            for (long long i = 0; i < n; i++ )
            {
                
                if (a[i] == x)
                {    count++;
                    if (a_sub[x] < count)
                        a_sub[x] = count;
                }
                else 
                {  
                    x = a[i];
                    i--;
                    count = 0;
                }
            }

            x = b[0];
            count = 0;
            for (long long i = 0; i < n; i++ )
            {
                
                if (b[i] == x)
                {    count++;
                    if (b_sub[x] < count)
                        b_sub[x] = count;
                }
                else 
                {  
                    x = b[i];
                    i--;
                    count = 0;
                }
            }
        }
        
        long long max_summ = 0;

        for (const auto& pair_a : a_sub)
        {
            long long key = pair_a.first;
            long long current_sum = pair_a.second + b_sub[key];
            max_summ = max(max_summ, current_sum);
        }
        for (const auto& pair_b : b_sub)
        {
            long long key = pair_b.first;
            long long current_sum = a_sub[key] + pair_b.second;
            max_summ = max(max_summ, current_sum);
        }
        
        cout << max_summ << "\n";
    }
}