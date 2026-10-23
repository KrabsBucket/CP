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
        long long p = n;

        bool condition = true;
        while (condition)
        {
            long long temp_n = n;
            long long lcmn = 1;

            while (temp_n > 0) {
                int digit = temp_n % 10;
                if (digit == 0) 
                    digit = 1;
   

                if (lcmn % digit != 0) {
                    lcmn = lcm(lcmn, digit);
                }
                temp_n /= 10;
            }
            

            if (n % lcmn == 0)
            {
                cout << n << "\n";
                condition = false;
            }
            else
            {
                n++;
            }
        }
    }
}