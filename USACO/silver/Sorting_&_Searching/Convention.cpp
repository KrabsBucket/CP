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
    int n; cin >> n;
    struct cows{
        int senior, tin , time;
    };

    vector<cows> vec(n);
    for(int i = 0; i < n; i++)
    {
         vec[i].senior = i+1; 
         cin >> vec[i].tin >> vec[i].time;
    }
    sort(vec.begin(), vec.end(), [](const cows& a, const cows& b) {
            return a.tin < b.tin;
            });

    auto comp = [](const cows& a, const cows& b) {
        return a.senior > b.senior;
    };

    priority_queue<cows, vector<cows> , decltype(comp)> pq(comp);

    int t = 0;
    int w = 0;
    int m = INT_MIN;
    int count = 0;
    while(count < n)
    {
        while(w < n && vec[w].tin <= t)
        {
            pq.push(vec[w]);
            w++;
        }
  
        if(pq.empty() && w < n)
        {
            t = vec[w].tin;
        }

        if(!pq.empty())
        {
            m = max(m, (t - pq.top().tin));
            t += pq.top().time;
            pq.pop();
            count++;
        }

    }

    cout << m << "\n";
    
}

int main() {
    fastio;

    #ifndef ONLINE_JUDGE
        freopen("/Users/divyesamdani/Documents/Stuff/input.txt", "r", stdin);
    #endif

     freopen("convention2.in", "r", stdin);
     freopen("convention2.out", "w", stdout);

    solve();

    return 0;
}
