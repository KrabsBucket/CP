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

void solve() {
   int n, m, r; cin >> n >> m >> r;
   struct rent{
       int mp;
       int quant;
   };

   vector<int> cows(n);
   for(auto &x: cows)
   {
       cin >> x;
   }
   sort(cows.rbegin(), cows.rend());


   vector<rent> renting(m);
   for(int i = 0; i < m ; i++)
   {
       cin >> renting[i].quant >> renting[i].mp;

   }
   sort(renting.begin(), renting.end(), [](rent a, rent b){return a.mp > b.mp;});



    vector<int> sell(r);
    for(auto &x:sell)
    {
        cin >> x;
    }

    sort(sell.rbegin(), sell.rend());

    ll milk = 0;
    int qth = 0;
    vector<ll> milk_profit(n+1);
    for(int i = 1; i <= n ; i++)
    {
        milk_profit[i] += milk_profit[i-1];
        milk = cows[i-1];
        while(qth < m)
        {
            if(milk - renting[qth].quant >= 0 )
            {
                milk_profit[i] += (renting[qth].mp * renting[qth].quant);
                milk -= renting[qth].quant;
                qth++;
            }
            else
            {
                milk_profit[i] += (milk*renting[qth].mp);
                renting[qth].quant -= milk;
              break;
            }

        }
    }
    
    vector<ll> rent_profit(n+1);
    for(int i = 1; i <= n; i++)
    {
        rent_profit[i] += rent_profit[i-1];
        if(i <= r)
        {
            rent_profit[i] += sell[i-1];
        }
    }


    ll maxi = -INF;

    for(int i = 0; i <= n ; i++)
    {
        maxi = max(maxi, (rent_profit[i] + milk_profit[n-i]));
    }

    cout << maxi << "\n";







}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("rental.in", "r", stdin);
    freopen("rental.out", "w", stdout);

    solve();

    return 0;
}
