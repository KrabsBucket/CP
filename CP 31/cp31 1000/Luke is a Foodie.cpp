#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        vector<int> arr_lower;
        vector<int> arr_upper;
        for (int i = 0; i <n; i++)
        {
            int k;
            cin >> k;
            arr.push_back(k);
            arr_lower.push_back(k-x);
            arr_upper.push_back(k+x);
        }


        int i = 0;
        int mini = arr_upper[0];
        int maxi = arr_lower[0];
        int v = 0;
        while (i < n)
        {


            if (arr_lower[i] > maxi)
                maxi = arr_lower[i];

            if (arr_upper[i] < mini)
                mini = arr_upper[i];

            if (maxi > mini)
            {
                v++;
                mini = arr_upper[i];
                maxi = arr_lower[i];
                continue;
            }
   
                i++;
        }
        cout << v << "\n";

    }

}