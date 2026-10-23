#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {

        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i] and left == -1) {
                left = i;
            }
            
            if (a[n - 1 - i] != b[n - 1 - i] and right == -1) {
                right = n - 1 - i;
            }

            if (left != -1 && right != -1) {
                break;
            }
        }

        vector<int> c(right - left + 1);
        for ( int i = left; i <= right; i++)
        {
            c[i - left] = a[i];
        }

        sort(c.begin(), c.end());

        int minn = c[0];
        int maxx = c[c.size() - 1];

        while (left > 0 && b[left - 1] <= b[left] )
        {
            left--;
        }

        while (right < n - 1 && b[right + 1] >= b[right]) 
        {
            right++;
        }

        cout << left + 1 << " " << right + 1 << '\n';
        
    }
}