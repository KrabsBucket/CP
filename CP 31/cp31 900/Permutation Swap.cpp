#include <bits/stdc++.h>

int main()
{   
    using namespace std;
    int t;
    int n;
    vector<int> vec_q;
    vector<int> vec_s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i< n; i++)
            {
                int x;
                cin >> x;
                vec_q.push_back(x);
            }
        int g = 0;    
        for (int i = 0; i<n; i++)
        {   
            g = gcd(g, abs(vec_q[i]-(i+1)));
        }
        cout<< g << "\n";
        vec_q.clear();
    }
    

}