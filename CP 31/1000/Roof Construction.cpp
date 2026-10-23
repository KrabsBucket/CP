#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int max_ele = n-1;
        int max_2 = static_cast<unsigned int>(pow(2, floor(log2(max_ele))));


        for (int i = 1; i < max_2 ; i++)
        {
            cout << i << " ";
        }
        cout << 0 << " ";

        for (int i = max_2; i < n; i++)
        {
            cout << i << " ";
        }
         cout <<  "\n";

    }
    
}