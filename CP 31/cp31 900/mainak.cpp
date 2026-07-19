#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        int ans = 0;

        if (n > 1) {
            ans = max(array[n-1] - *min_element(array.begin(), array.end()-1),*max_element(array.begin()+1, array.end()) - array[0]);
        }
        if (n == 1){
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i< n-1; i++)
        {
            ans = max(ans, array[i] - array[i+1] );
            ans = max(ans, array[i+1] - array[i] );
        }
        cout << ans << "\n";

    }
}
