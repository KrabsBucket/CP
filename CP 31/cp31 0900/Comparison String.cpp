#include <iostream>
#include <string>
#include <algorithm>

int main ()
{
    using namespace std;
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int r = 0, l = 0;
        int maxR = 0, maxL = 0;

        for (int j = 0; j < n; j++) {   
            if (s[j] == '<') {
                r++;
                maxR = max(maxR, r);
                l = 0;
            } else {
                l++;
                maxL = max(maxL, l);
                r = 0; 
            }
        }
        
        int ans = max(maxL, maxR) + 1;
        cout << ans << endl;
    }
}
