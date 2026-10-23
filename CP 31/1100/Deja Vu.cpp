#include <bits/stdc++.h>
#include <bit>
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int T;
    cin>> T;
    while (T--)
    {

        int n, q;
        cin>> n >> q; 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
            cin>> arr[i]; 

        vector<int> compare;

        int abcd;
        cin>> abcd;
        compare.push_back(abcd);
        for (int i = 1; i < q; i++) 
        {
            int x;
            cin>> x;
            if (x < compare.back())
                compare.push_back(x);
        }
        
        int r = compare.size();
        


        for (int i = 0; i < n; i++) 
        {
            int index = __countr_zero(unsigned(arr[i]));
            if ( index < 1 )
                continue;

            for (int j = 0; j < r ; j++)
            {
                if (index >= compare[j])
                {
                    arr[i] += (1 << (compare[j] - 1));
                    index = compare[j]-1;
                }

            }
        }

        for (int i = 0; i < n; i++) 
            cout<< arr[i]<<" "; 

        cout<< "\n";

    }
}
