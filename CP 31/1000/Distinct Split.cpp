#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>> n;
        string s;
        cin >> s;
        vector<int> initial(n);
        vector<int> final(n);
        set<char> intial_same;
        set<char> final_same;
        for (int i = 0; i <n ; ++i)
        {
            intial_same.insert(s[i]);
            initial[i] = intial_same.size();
            int r = n-1-i;

            final_same.insert(s[r]);
            final[r] = final_same.size();
        }

        
        int max_sum = 0;
        for (int i =0 ; i < n-1; i++)
        {
            int current_sum = initial[i] + final[i+1];
            max_sum = max(max_sum , current_sum);

        }
        cout << max_sum << "\n";
    }
    
}