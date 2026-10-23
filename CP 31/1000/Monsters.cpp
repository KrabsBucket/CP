#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        long long k;
        cin >> n >> k;
        
        priority_queue<pair<int, int>> monsters;
        
        for (int i = 0; i < n; i++)
        { 
            int x;
            cin >> x;
            int effective_health = x % k;
            if (effective_health == 0) {
                effective_health = k;
            }
            monsters.push({effective_health, -i});
        } 

        vector<long long> indexs;
        while (!monsters.empty()) {
            indexs.push_back(-monsters.top().second + 1);
            monsters.pop();
        }
        
        for (long long val : indexs) {
            cout << val << " ";
        }
        cout << "\n";
    }
}