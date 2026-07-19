#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long x, y;
        cin >> x >> y;
        vector<vector<long long>> arr_main;
        vector<long long> temp;
        vector<long long> sizee;

        
        for(int i = 0; i < 4; i++)
        {
            long long l;
            cin >> l;
            sizee.push_back(l);
            for (int i = 0; i< l ; i++)
            {
                
                long long m;
                cin >>m;
                temp.push_back(m);

            }

            arr_main.push_back(temp);
            temp.clear();

        }
        long long r = y;
        long long max_area = 0;
        long long curr_area = 0;
        for (int i = 0; i < 4; i++)
        {
            if (i > 1)
            r = x;

            curr_area = (arr_main[i][sizee[i]-1] - arr_main[i][0])*r;
            max_area = max(max_area, curr_area);


        }

        cout << max_area << "\n";


    }


}