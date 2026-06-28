#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int count = 0;
        for (int i =0; i <len-1; i++)
            if (s[i] != s[i+1])
            {
                s.erase(i,2);
                len -= 2;
                i = -1;
                count++;}

        

        if (count%2 == 0)
                cout << "NET" << "\n";
        else 
                cout << "DA" << "\n";




    }

}