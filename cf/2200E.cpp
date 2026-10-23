#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

int fact(int n)
{
    vector<int> fac;
    if(n%2 == 0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        fac.push_back(2);
    }

    for(int i = 3; i*i <= n; i+=2)
    {
        if(n%i == 0)
        {
            while(n%i== 0)
            {
                n/=i;
            }
            fac.push_back(i);
        }
        if(fac.size() > 1)
        {
            return 0;
        }
    }

    if(n > 2)
    {
        fac.push_back(n);
    }
    if(fac.size() > 1)
    {
        return 0;
    }
    else if(fac.size() == 1)
    {
        return fac[0];
    }
    return 1;

}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr)
    {
        cin >> x;
    }
    bool flg = true;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            flg = false;
            break;
        }
    }
    if(flg)
    {
        cout << "Bob\n";
        return;
    }
    for(int i = 0;i <n; i++)
    {
        int d = fact(arr[i]);
        if(d == 0)
        {
            flg = true;
            break;
        }
        arr[i] = d;

    }
    if(flg)
    {
        cout << "Alice\n";
        return;
    }
    flg = true;    
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            flg = false;
            break;
        }
    }
    cout << (flg ? "Bob\n" : "Alice\n");



    

    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
