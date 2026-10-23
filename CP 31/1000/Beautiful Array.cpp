#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n,k,b,s;
        cin >> n >> k >> b>> s;
        vector <long long> arry;

        if (k == 1 and s != b )
            { 
                cout << -1 << "\n";
            continue;
        }
        else if (k == 1 and s == b)
        {   cout << s << " ";
            for (int i = 0 ; i < n-1 ; i++)
            {
                cout << 0 << " ";

            }
            cout << "\n";
            continue;
        }

        long long min_s = k * b;
        long long max_s = k * b + n * (k - 1);

        if (s < min_s || s > max_s)
        {
            cout << -1 << "\n";
            continue;
        }
        long long first = k*b + k-1;
        if (s <= first )
            first = s;

        long long multiple = (s-first)/(k-1);
        long long remainder = (s- first)%(k-1); 
        arry.push_back(first);
        for (long long i = 0; i < multiple ; i++)
        {
            arry.push_back(k-1);
        }
        if (remainder != 0)
            arry.push_back(remainder);

        long long  l = n - arry.size();
        if (l < 0)
            {cout << -1 << "\n";
            continue;
            }
        else 
            {
                for(long long i = 0; i < l ; i++)
                arry.push_back(0);
            }


        for (long long i = 0; i < n ; i ++)
        {
            cout << arry[i] << " ";
        }
        cout << "\n";




    }
    
    
}