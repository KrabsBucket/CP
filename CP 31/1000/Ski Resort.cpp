#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n, k, q;
        cin >> n >> k >> q;
        long long total = 0;
        long long  r = 0;
        long long m = 0;
        vector<long long> temp(n);
        vector<long long> points = {-1};
        for (long long i = 0; i<n ; i++)
        {
            cin>>temp[i];
            if (temp[i]> q)
                points.push_back(i);

        }
        points.push_back(n);

        if (points.size()== n+2)
            total =0;

        else if (points.size()>2)
        {
            for (int i = 0; i < points.size()  -1 ;i++)
            {   m = points[i+1] - points[i] -1;
                if ( m >= k)
                    total += (m-k +1)*(m-k+2) / 2;

            }
        }
        else
        {

                total+= (n-k+1)*(n-k+2)/2;           
        }

        cout << total << "\n";


    }
}