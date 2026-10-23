#include <bits/stdc++.h>
using namespace std;

bool sizecheck(int e, int f)
{
    if (e < f)
        return true;
    else
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        string N = to_string(n);
        reverse(N.begin(), N.end());
        int r = 0, p = 0;
        int len = N.size();
        bool flag = true;
        bool r_found = false;
        bool p_found = false;

        while (r < len) {
            if (N[r] == '0') {
                int r1 = r + 1;
                while (r1 < len) {
                    if (N[r1] == '0' || N[r1] == '5') {
                        r_found = true;
                        break;
                    }
                    r1++;
                }
                if (r_found) break;
            }
            r++;
        }

        while (p < len) {
            if (N[p] == '5') {
                int p1 = p + 1;
                while (p1 < len) {
                    if (N[p1] == '2' || N[p1] == '7') {
                        p_found = true;
                        break;
                    }
                    p1++;
                }
                if (p_found) break;
            }
            p++;
        }

        int res1 = 100, res2 = 100;
        if (r_found) {
            int r1_final = N.find_first_of("05", r + 1);
            res1 = r + (r1_final - r - 1);
        }
        if (p_found) {
            int p1_final = N.find_first_of("27", p + 1);
            res2 = p + (p1_final - p - 1);
        }

        cout << min(res1, res2) << "\n";
    }
    return 0;
}