#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        if (s[0] == s[s.size()-1])
            cout << s << "\n";
        else
            if (s[0] == 'a')
                cout << s.substr(0, s.size()-1) << 'a'<< "\n";
            else
                cout << s.substr(0, s.size()-1) << 'b'<< "\n";
    }




}