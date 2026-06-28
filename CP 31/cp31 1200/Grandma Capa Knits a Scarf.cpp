#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
     
    int n; cin >> n;
    string s; cin >> s;
    int i, j;
    i = 0; j= n-1;
    bool flag = true;

    rep(i, 0, n)
    {
        if(s[i] != s[n-i-1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << "\n";
        return;
    }



    char c1 = '0';
    int count1 = 0;
    int count2 = 0;
    bool f1 = false;
    bool f2 = false;
    while(j >= i)
    {
        if (s[i] != s[j] && (c1 == '0'))
        {
            c1 = s[i];
            
        }

        if (s[i] != s[j] && s[i] == c1)
        {
            i++;
            count1++;
        }
        else if(s[i] != s[j] && s[j] == c1)
        {
            j--;
            count1++;
        }
        else if(s[i] != s[j])
        {
            f1 = true;
            break;
        }
        else
        {i++;
        j--;
        }

    }
    j= n-1; i=0;
    c1 = '0' ; 
    while(j >= i)
    {
        if (s[i] != s[j] && (c1 == '0'))
        {
            c1 = s[j];
        }

        if (s[i] != s[j] && s[i] == c1)
        {
            i++;
            count2++;

        }
        else if(s[i] != s[j] && s[j] == c1)
        {
            j--;
            count2++;
        }
        else if (s[j] != s[i])
        {
            f2 = true;
            break;
        }
        else
        {
        i++;
        j--;
        }

    }

    if (f1 & f2)
    {
        cout << -1 << "\n";
    }
    else if(f1)
    {
        cout << count2 << "\n";
    }
    else if (f2)
    {
        cout << count1 << "\n";
    }
    else
    {
        cout << min(count1, count2) <<"\n";
    }
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
        // freopen("/Users/divyesamdani/Documents/Stuff/output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
