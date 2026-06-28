#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int result = 0;
        int r = static_cast<int>(log2(a));
        int x = 0;
        int k;

        if (r>1)
        {
            k = 1 << r;
        }
        else
        {
            k = 0;
        }
        for (int i = k; i < a; i++)
        {
            x^=i;
        }

        if (x == b)
        {
            result = a;
        }

        else if ((x^a) == b)
        {
            result = a+2;

        }
        else
        {
            result = a+1;
        }
        cout << result << endl;
        
        


    }

}