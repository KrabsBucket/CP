#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) << '\n';

void solve() {
    int ina, inb, outa, outb;
    ina = 0;
    inb = 99999;
    outa = 0;
    outb = 99999;
    int n; cin >> n;
    vector<string> s(n);
    vector<int> A(n);
    vector<int> B(n);
    rep(i, 0, n)
    {
        cin >> s[i];
        cin >> A[i];
        cin >> B[i];
    }
    rep(i, 0, n)
    {
        int a, b;
        a = A[i];
        b = B[i];
        
        if (s[i]  == "on")
        {
            outa += a;
            outb += b;
        }

        else if (s[i] == "off")
        {
            outa -= b;
            outa = max(0, outa);
            outb -= a;
        }

        else
        {
            outa = max(outa, a);
            outb = min(outb, b);
        }

    }

    for (int i = n-1; i > -1; i--)
    {
        int a, b;
        a = A[i];
        b = B[i];
        
        if (s[i]  == "off")
        {
            ina += a;
            inb += b;
        }

        else if (s[i] == "on")
        {
            ina -= b;
            ina = max(0, ina);
            inb -= a;
        }

        else
        {
            ina = max(ina, a);
            inb = min(inb, b);
        }

    }
    cout << ina <<" " << inb <<"\n";
    cout << outa <<" " << outb <<"\n";



    
}

int main() {
    fastio;


     freopen("traffic.in", "r", stdin);
     freopen("traffic.out", "w", stdout);

    solve();

    return 0;
}
