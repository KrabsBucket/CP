#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long count_0 = 0;
        long long count_1 = 0;
        for (long long i =0; i < n ; i++)
        {
            long long x;
            cin >> x;
            if (x==0)
                count_0++;

            if (x ==1 )
                count_1++;
        }   
        long long r = pow(2, count_0) * count_1;
        cout << r <<"\n";



    }
    



}