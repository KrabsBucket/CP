#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int count_pos = 0;
        int count_zero = 0;
        int count_neg = 0;
        int total_min = INT_MAX;
        int total_sum = 0;
        for (int i = 0; i < n ; i++)
        {
            vector<int> temp(m);
            for (int j = 0; j < m; j++)
            {
                cin >> temp[j];

                total_min = min(total_min, abs(temp[j]));

                total_sum += abs(temp[j]);

                if (temp[j] > 0)
                    count_pos++;
                else if (temp[j] == 0)
                    count_zero++;
                else
                    count_neg++;
            }
        }

        if (count_neg % 2 == 0 || count_zero > 0)
            cout << total_sum << endl;
        else
            cout << total_sum - 2*total_min << endl;

    }

}