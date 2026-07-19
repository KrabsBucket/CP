#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){ 
        long long n , x;
        long long max = 0;
        cin>>n>>x;
        vector<long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            max += (arr[i]+x-1)/x;

        }
        long long sume = accumulate(arr.begin(),arr.end(), 0LL);
        
        cout << (sume +x -1)/x << " " << max << "\n";
    
    
    }}