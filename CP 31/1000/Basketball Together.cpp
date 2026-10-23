#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long D;
    cin >> N >> D;
    vector<int> power(N);
    for (int i = 0; i < N; i++)
    {
        cin >> power[i];
    }
    sort(power.begin(), power.end(), greater<int>());
    int team_count = 0;
    int i = 0;
    int j = N-1;
    int check = 0;
    while (i <= j)
    {
        

        if (power[i] > D)
        {
            team_count++;
            i++;
        }
        
        else 
        {   
           long long players = D/power[i] +1;
           if ((long long) (j - i + 1) >= players)
            {
                j -= (players -1);
                team_count ++;
                i++;
            }

            else
            {
                break;
            }
        }
    }

    cout << team_count << "\n";
    

}