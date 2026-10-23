#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long a = 1;
        
        if (n%2 == 0)
        {
            a = n/2;
            cout << a << " " << a << "\n";
        }
        else
        {
            for (int i = 3; i <= int(sqrt(n)); i+=2) 
            {
                if (n%i == 0)
                {
                    a = n/i;
                    break;
                }
                
            }
            cout << a << " " << n-a << "\n";

        } 
        
        
    }
    

}