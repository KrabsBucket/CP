#include <bits/stdc++.h>
#include <string>
using namespace std;
int check(long long x){

    if(x % 2 == 0) return -1;
    else return 1;

}

int main(){
    int T;
    cin >> T;
    while(T--){
        long long x, n; 
        cin >> x >> n;
        long long  l = n%4;
        long long  r = n - l + 1;
        while(l--){
            x += r * check(x);
            r++;
        }
        cout << x << "\n";

    }





}