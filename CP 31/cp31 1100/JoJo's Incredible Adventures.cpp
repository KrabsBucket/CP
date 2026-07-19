#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

int main() {
    fastio;

    int T; cin >> T;
    while(T--) {

        string s;
        cin >> s;   

        long long n = s.size();
        s += s;
        long long max_1 = 0;
        long long longest_1 = 1;
        long long maxxx_1 = 0;
        
        for (int i = 0; i < 2*n; i++)
        {
            if (s[i] =='1')
            {
                max_1++;
                if (i != 2*n -1)
                {    if (s[i+1] == '1')
                    {
                        longest_1++;

                    }
                    else
                    {
                        if (longest_1 > maxxx_1)
                        {
                            maxxx_1 = longest_1;
                        }
                        longest_1 = 1;
                    }}
            }

        }
        
        if (max_1 == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        if (max_1 == 2*n)
        {
            cout << n*n << '\n';
            continue;
        }
        long long area = (maxxx_1 + 1)/2 ;

    cout << area*((maxxx_1 + 2)/2) << '\n';

    }
}