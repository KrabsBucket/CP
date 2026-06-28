#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main(){
    int T;
    cin >>T;
    while(T--)
    {
        int n;
        cin >> n;
        int m = 0;
        for (int i = 0; i < n; i++)
            {   int x;
                cin>> x;
                if (i ==0)
                m = x;

                m = m&x;

            }

        cout << m << "\n";


    }


}