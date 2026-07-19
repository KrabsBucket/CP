#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        string sf = s+s;
        unordered_map <char, vector<int>> indices;
        for (int i = 0; i < 2*n ; i++)
        {
            indices[sf[i]].push_back(i);
        }

        vector<int> c_pos = indices[c];
        vector<int> g_pos = indices['g'];
        int maxdiff = INT_MIN;
        for (int i = 0; i < c_pos.size(); i++)
            {
                for (int j = 0; j< g_pos.size(); j++)
                {
                    if (g_pos[j] >= c_pos[i])
                    {
                        maxdiff = max(maxdiff, g_pos[j] - c_pos[i]);
                        break;
                    }
                
                    }
            }
        cout << maxdiff<< "\n";

    }

}