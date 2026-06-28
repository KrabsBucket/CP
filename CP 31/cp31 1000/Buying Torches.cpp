 #include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        long long x,y,k ;
        cin >> x >> y >> k ;
        long long sticks_required = y * k + k ;
        if ((sticks_required-x)%(x-1) == 0 )
            cout << (sticks_required-x)/(x-1) + k + 1  << endl;


        else if (sticks_required%(x-1) == 0)
            cout << sticks_required/(x-1)  + k   << endl;


        else
            cout << sticks_required/(x-1)  + k + 1  << endl;

    }

}
