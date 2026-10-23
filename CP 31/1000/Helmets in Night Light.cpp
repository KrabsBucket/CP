#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n, p;
        cin >> n >> p;
        vector<long long> a(n);
        long long cost = p;
        long long covered_villagers = 1;
        vector<long long> b(n);
        vector<pair<long long, long long>> k;
        bool p_is_best = true;
        for(long long i= 0; i<n ; i++)
        {
            cin>>a[i];
        }
        for(long long i= 0; i<n ; i++)
        {
            cin>>b[i];
            if (p > b[i])
            {
            p_is_best = false;
            k.emplace_back(b[i], i);
            }

        }

        if (p_is_best)
        {
        cout << p*n << "\n";
        continue;
        }

        sort(k.begin(), k.end());
        long long  i = 0;

        while(true)
        {   
            cost +=  k[i].first* min(n-covered_villagers, a[k[i].second]);

            covered_villagers += min(a[k[i].second], n-covered_villagers);
            if (covered_villagers >= n)
            {    
                cout << cost << "\n";
                break;
            }
            i++;
            if (i == k.size())
                {
                    cost += (n - covered_villagers)*p;
                    cout << cost << "\n";
                    break;
                }

        }
        



    }
}