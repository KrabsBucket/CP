#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> arry(n) ;
        bool flag = false;
        vector<int> indices;
        int index = 0;
        for (int i = 0; i < n ; i++)
        {
            cin >> arry[i];
            indices.push_back(i);
            
        }
        map<int, int> rep;
        for (int e : arry)
        {
            rep[e]++;
        }

        for (const auto&pair : rep)
        {
            if (pair.second < 2)
            {
                flag = true;
                break;
            }

            indices[index] += pair.second;
            index +=pair.second;


        }


        if (flag)
        cout << -1 << "\n";
        else 
        {
            for (int e : indices)
            cout << e << " ";
        }
        cout << "\n";
    }   
    

}