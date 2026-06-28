#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
bool check_ap(int a, int b, int c)
{
    if (2*b == a + c) 
        return true;

    return false;}


int main (){
    int T;
    cin >> T;
    while (T--){    
        int a, b, c;
        cin >> a >> b >> c;
        if (check_ap(a, b, c))
            cout << "YES" << endl;
        else
            {
                bool flag = false;
                if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
                    flag = true;
                else if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
                    flag = true;
                else if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
                    flag = true;

                if (flag)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            
    }



}