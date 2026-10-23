#include <bits/stdc++.h>
using namespace std;



int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> results;
        int words = 0;
        int count = 0;
        for (int i = 0; i< n; i++)
        {
            results[s[i]]++;

            if (results[s[i]] >= 2)
            count++;

            if (results[s[i]] > 0)
                words+= i+1 - count;

            else 
                words+= i+1;
        }

        cout << words << endl;

        
    }




}