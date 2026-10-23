 #include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        long long a,b;
        cin >> a >> b;
        if (a > b)
        swap(a,b);

        long long count =0;
        long long ans = 0;
        bool flag = false;


        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }


        if(b%a == 0)
        {
           long long temp = b/a;
           bitset <64> bits(temp);
              for (int i =0; i<64; i++)
              {
                if (bits[i] == 1)
                count++;
              }

            if (count > 1)
            {
                cout << -1 << "\n";
                continue;
            }   

            long long power = log2(temp);
            if (power % 3 == 0)
                ans = power/3;
            else 
                ans = power/3 + 1;
                
            cout << ans << "\n";

        
        }

        else
            cout << -1 << "\n";
    }

}