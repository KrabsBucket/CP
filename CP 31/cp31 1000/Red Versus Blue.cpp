#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        
        int rmin = r / (b + 1);
        int rextra = r % (b + 1);

        string result = "";
        for (int i = 0; i < b + 1; ++i) {
            int current_Rs;
            if (i < rextra) {
                current_Rs = rmin + 1;
            } else {
                current_Rs = rmin;
            }
            
            for (int j = 0; j < current_Rs; ++j) {
                result += 'R';
            }

            if (i < b) {
                result += 'B';
            }
        }
        cout << result << "\n";
    }
}