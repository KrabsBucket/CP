#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long a, b;
        cin >> a >> b;
        long long c = b;
        long long result = 1;

        if (b > a)
            cout << result << " \n";
        else if (a == b)
            cout << result + 1 << " \n";
        else
        {
            if (b == 1)
            {
                c = 2;
                result += 1;
            }

            result--;
            long long r = sqrt((double)a) + 1;
            long long min_result = LLONG_MAX;

            if (c > r)
                min_result = 2;
            for (long long i = c; i <= r; i++)
            {
                result = log((double)a) / log((double)i) + i - b + 1;
                min_result = min(min_result, result);
            }
            
            cout << min_result << endl;
        }
    }
}