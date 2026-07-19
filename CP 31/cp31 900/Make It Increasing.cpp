#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        vector<int> arr(n);
        bool flag= false;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       for (int i = n-2; i > -1; i--) {
            if (arr[i+ 1]== 0) {
            flag = true;
            break;
        }


            else if (arr[i] >= arr[i + 1]) {
            arr[i] = arr[i]/2;
            count++;
            if (arr[i != 0])
                i++ ;}
        
        }
        if (flag) {
            cout << -1 << "\n";
        } else {
            cout << count << "\n";
        }

    }




}
