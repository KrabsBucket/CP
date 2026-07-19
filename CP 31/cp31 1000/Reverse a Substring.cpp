 #include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    cin >> n;

    string s;
    cin >> s;
    bool flag = false;  
    int index = -1;

    for(int i = 0; i < n -1; i++) {
        int x = static_cast<int>(s[i]);
        int y = static_cast<int>(s[i+1]);
        if (x > y)
        {
            flag = true;
            index = i;
            break;
            
        }
    }


        if (flag)
            {
                cout << "YES\n";
                cout << index + 1 << " " << index + 2 << "\n";
            }

        else 
            cout << "NO\n";
    


}