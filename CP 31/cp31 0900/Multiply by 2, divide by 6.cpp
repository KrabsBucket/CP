#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        
        sum += lastDigit;
        
        n = n / 10;
    }
    
    return sum;
}



int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int count = 0;
        while (true){
            if (n == 1)
            {
                cout << count <<"\n";
                break;
            }

            else if (sumOfDigits(n)%3 != 0)
            {
                    cout << -1 << "\n";
                    break;
    
            }

            else if ((n%10)%2 != 0)
            {
                count ++;   
                n *= 2;
            }

            n /= 6;
            count++;

        }


    }

}