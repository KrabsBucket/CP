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
bool isprime(int number)
{
    for(int i =2; i*i <= number; i++)
    {
        if (number%i ==0)
        {
            return false;
        }
    }
    return true;
}

void solve() {
   int n; cin >> n;
   if(isprime(n+1))
   {
       cout<<"YES\n";
   }
   else
   {
       cout << "NO\n";
   }
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
