#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n, k;
        int count2 = 0;
        cin >> n >> k;
        vector<int> arr(n);
        int mini = INT_MAX;
        for(int i =0 ; i<n ; i++)
            {
                cin >> arr[i];
                if (arr[i]%2==0)
                    count2++;

                int l = arr[i]%k;

                int r = 0;
                if (l == 0)
                    r = 0;

                else
                 {    r = k-l;
                     if (k == 4 and count2 > 1)
                        r = 0;
                    else if (k ==4 and count2 == 1)
                        r = 1;

                    else if (k == 4 and r > 1)
                        r = 2;
                 }
                mini = min(mini , r);

            }
        cout << mini << "\n";
    }

}