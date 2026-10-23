#include <bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cost = 0;
        
        for (int i = 0; i <k ; i++)
        {
            if(s[i] == 'W')
            cost++;
        }
        int min_cost = cost;
        int initial_cost = 0;

        for (int i = 1; i < n-k+1; i++ )
        {

            if (s[i -1] == 'W')
                cost--;
            if (s[i + k -1] == 'W')
                cost++;
  
            min_cost = min (min_cost, cost);

        }
        if (min_cost < 0)
        min_cost = 0;
        
        cout << min_cost << "\n";
    }
    

}