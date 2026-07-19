#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0;
        int move_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                x++;
            else if (s[i] == ')')
                x--;

            if (x < 0)
            {
                move_count++;
                x = 0;
            }

        }
        cout << move_count << "\n";


    }

}