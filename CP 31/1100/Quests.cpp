#include <bits/stdc++.h>
using namespace std;



int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int maxx = 0;
        int suma = 0;

        vector<int> vec_a(n);
        vector<int> vec_b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec_a[i];
            if (i < k)
                suma+=vec_a[i];
        }
        int maaxb = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            maaxb = max(maaxb, x);

            vec_b[i] = maaxb;


        }



        maxx = suma + (k- min(k,n))*vec_b[n-1];
        int j = 0;
        int r = 0;
        int sumb = 0;
        while (j < min(n,k)-1 )
        {   
            r = min(k,n)- j;
            suma -= vec_a[r-1];

            sumb = (k - r +1)*vec_b[r-2];
            
            maxx = max(maxx, suma+ sumb);
            j++;
        }
        



        cout<< maxx<< "\n";

    }


}