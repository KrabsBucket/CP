#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int m1 = 0, m2 = 0, m3 = 0;
        bool flag = false;

        vector<long long> first_stack;
        for (int i = 0; i < n; i++)
        {
            int y = 0;
            cin >> y;
            if ((y|x) > x)
            {
                flag = true;
            }
            if (!flag)
            {
                m1 = (m1 | y);
            }
            
        }
        flag = false;
        
        vector<long long> second_stack;
        for (int i = 0; i < n; i++) 
        {
            int y = 0;
            cin >> y;

            if ((y|x) > x)
            {
                flag = true;
            }
            if (!flag)
            {
                m2 = (m2 | y);
            }        
        }   

        flag = false;

        vector<long long> third_stack;
        for (int i = 0; i < n; i++)             
        {
            int y = 0;
            cin >> y;
            if ((y|x) > x)
            {
                flag = true;
            }
            if (!flag)
            {
                m3 = (m3 | y);
            }
        }

        if (x == 0)
        {
            cout << "YES\n";
            continue;
        }

        
        int m = (m1 | m2 | m3);

        if (m == x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        



    }


}