#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long beauty = 0;
        cin >> n;
        vector<int> m_values(n);
        vector<vector<long long>> vecs(n);
        
        for (int i = 0; i < n; i++) {
            long long min1 = LLONG_MAX;
            long long min2 = LLONG_MAX;

            cin >> m_values[i];
            
            for (int j = 0; j < m_values[i]; j++) {
                long long element;
                cin >> element;

                if (element < min1) {
                    min2 = min1; 
                    min1 = element; 
                } else if (element < min2) {
                    min2 = element; 
                }
            }
            
            vecs[i].push_back(min1);
            vecs[i].push_back(min2);
        }

        int index = 0;
        long long mini = LLONG_MAX;
        long long miiin = LLONG_MAX;
        long long check = 0;
        int i = 0;
        while (i < n)
        {
            mini = min (vecs[i][1], mini);
            miiin = min (vecs[i][0], miiin);
            
            i++;
        }
        
        for (int i =0 ; i < n ; i++)
        {
            beauty += vecs[i][1];
        }

        cout << beauty - mini + miiin << "\n";

    }
}