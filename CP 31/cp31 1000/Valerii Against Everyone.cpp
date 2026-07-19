 #include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin>> T;
    while (T--)
    {
        int n;
        cin >> n;
        unordered_set<int> s;
        for (int i = 0; i < n ; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }    
        if (s.size() < n)
        cout << "YES" << endl;
        else
        {
            
        cout << "NO" << endl;
        }

    }


}