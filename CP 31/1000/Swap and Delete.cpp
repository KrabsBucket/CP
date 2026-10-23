#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        int count_z = 0;
        int count_o = 0;
        int cost = 0;

        for (int i = 0; i < s.size() ; i++)
        {
            if (s[i] == '0')
                count_z ++;


            else
                count_o++;

                
        }
        int i = 0;
        while (true)
        {
            
            if (count_o == -1 or count_z == -1)
                {cout<< max(count_o, count_z) << "\n";
                break;
                }

            if (s[i] == '0')
                count_o-- ;
            else 
                count_z--;


            i++;
        }




    }


}