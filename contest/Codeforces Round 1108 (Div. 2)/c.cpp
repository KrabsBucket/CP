#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 5; // Adjust this based on problem constraints

long long fact[MAXN], invFact[MAXN];


// Function to calculate (base^exp) % MOD in O(log exp)
long long binary_power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Fermat's Little Theorem for modular inverse
long long modInverse(long long n) {
    return binary_power(n, MOD - 2);
}

// Call this ONCE at the start of main()
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    
    // 1. Precompute factorials
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    
    // 2. Precompute inverse factorials in O(N) using a backward loop
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// O(1) query
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    
    // Formula: n! * (r!)^-1 * ((n-r)!)^-1 % MOD
    long long ans = fact[n] * invFact[r] % MOD;
    ans = ans * invFact[n - r] % MOD;
    return ans;
}

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define popcnt(x) __builtin_popcountll(x)
#define trailz(x) __builtin_ctzll(x)
#define leadz(x) __builtin_clzll(x)

void solve() {
   int n; cin >> n;
   vector<pair<int, int>> arr;
   for(int i=0; i < n;i++)
   {
       int x; cin >> x;
       if (!arr.empty() && x == arr.back().first)
       {
            arr.back().second++;
       }
       else
       {
           arr.push_back({x,1});
       }
   }
   long long c = 1;
   long long  twos = 0;
   long long thres = 0;
   int m = arr.size();
   for(int i = 0; i<m; i++)
   {
       twos += ((arr[i].second)*(arr[i].second-1))/2;
   }
   if (arr[0].first == -1)
   {
       for(int i = 1; i < m-1; i++)
       {
            if(arr[i+1].first - arr[i].first == 1)
            {
                thres += arr[i].second*arr[i+1].second;
            }
       }
       thres *= arr[0].second;
       
   }
   for(int i = 2; i <= n; i++)
   {
       if (i%2 == 0)
       {
           c += (nCr(twos, i));
           c%=MOD;
       }
       else
       {
           c += (nCr(twos,i)*thres);
            for(int i = 0; i < m; i++)
            {
                if(arr[i].second < i)
                {
                    c--;
                }
            }
            c%= MOD;
       }

   }
   cout << c << "\n";
   
}

int main() {
    fastio;


    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif
    precompute();
    int t;  
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
