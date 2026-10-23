#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b; 
        if (a.length() < b.length()) {
            swap(a, b);
        }

        int max_count = 0;

        for (int i = 0; i < a.length(); i++) {
            for (int k = 0; k < b.length(); k++) {
                int j = i;
                int kk = k;
                int count = 0;
                while (j < a.length() && kk < b.length() && a[j] == b[kk]) {
                    j++;
                    kk++;
                    count++;
                }
                max_count = max(max_count, count);
            }
        }

        cout << a.length() + b.length() - 2 * max_count << endl;
    }
}
