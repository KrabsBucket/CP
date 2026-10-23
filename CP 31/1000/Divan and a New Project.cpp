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
        vector<pair<int, int>> repeat (n+1);
        vector<int> solution(n+1);
        vector<int > arr = {0};
        solution[0] = 0;
        for (int i = 1; i < n+1; i++)
        {   
            int x;
            cin>>x ;
            repeat[i].first = x;
            repeat[i].second = i;
        }
        sort(repeat.begin(),repeat.end(), greater<>());
        int k = 0;
        for (int i = 1; i < n+1; i++)
        {
            if (k == n)
            break;

            arr.push_back(i);
            k++;

            if (k == n)
            break;

            arr.push_back(-i);
            k++;
            
        }
        long long cost = 0;
        for (int i = 1; i < n+1 ; i++)
        {
            solution[repeat[i-1].second] = arr[i];
            
            cost += (long long)repeat[i-1].first * abs(arr[i]);
        }

        cout << 2*cost <<"\n";
        
        for (int i = 0; i< n+1;i++ )
        {
            cout<< solution[i]<< " ";

        }

        cout << "\n";

    }
}