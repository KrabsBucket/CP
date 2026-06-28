#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cerr << (#x) << " = " << (x) < '\n';



void hanoi(int n, int from, int to, int aux)
{

    if (n == 0) return;

    hanoi(n-1, from, aux, to);

    cout << from << " " << to << "\n";

    hanoi(n-1, aux, to, from);




}
void solve() {
    
    int n; cin>>n;
    

    cout << (1<<n) -1 << "\n";
    hanoi(n, 1, 3, 2);

}

int main() {
    fastio;
        solve();
}