#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long min_t = (n + 5) / 6;
        long long max_t = n / 4;
        if (n % 2 != 0 || n < 4)
            cout << -1 << endl;
        else
            cout << min_t << " " << max_t << endl;
    }

}