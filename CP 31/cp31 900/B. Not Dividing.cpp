#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array;
        for (int i =0 ; i <n; i++)
        {
            int x;
            cin >> x;
            array.push_back(x);
        }
        
        vector<int> soln ;
        
        for (int i = 0; i < n; i++)
        {
            if (array[i] == 1 and i < n-1){
                array[i]++;}

            if (i > 0 and array[i] % array[i-1] == 0)
               {array[i]++;}


            soln.push_back(array[i]);
            

        }
        for (int x : soln){

            cout<< x << " ";

        }

        cout << "\n";













    }
    




















}
