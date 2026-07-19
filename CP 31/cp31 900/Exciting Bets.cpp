#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main(){
    int T;
    
    cin >>T;
    while(T--)
    {   
        long long q = 0;
        long long r = 0;
        long long a, b;
        cin >> a >> b;

        if (a<b)
            swap(a,b);

        if (a-b == 0 or (a==0 and b==0))
            cout << 0 << " " << 0 << "\n";



        else 
            {
                r = a-b;
                q = a%r;  
                
                cout << r << " " << min(r - q, q) << "\n";

            }
        
    }
}