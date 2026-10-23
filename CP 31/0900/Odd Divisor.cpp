#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    
    cin >>T;
    while(T--)
    {
        long long n;
        cin >> n;
        while (true)
        {
        if (n%2 ==0)
            n /=2;
        else if (n==1)
        {   cout << "NO" << "\n";
            break;
        }

        else
            {
                cout << "YES" << "\n";
                break;
            }
        
        }

    }}