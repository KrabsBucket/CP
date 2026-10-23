#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        int d;
        cin >> d;
        bool is_prime = false;
        int p = d+1 ;
        
        while(!is_prime)
        {
            int r = sqrt(p);
            is_prime = true;
            for (int i = 2; i <= r; i++)
            {
                if (p % i == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (!is_prime)
                p++;
        }
        int q = p;
        p = d + p;
        is_prime = false;
        int r = sqrt(p);

        while(!is_prime)
        {
            int r = sqrt(p);
            is_prime = true;
            for (int i = 2; i <= r; i++)
            {
                if (p % i == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (!is_prime)
                p++;
        }


        cout << p*q << endl;
        
    }

}