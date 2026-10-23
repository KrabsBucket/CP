#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int t; cin >> t; 
    while (t--) { 
        int n; cin >> n; 
        bool flag = false; 
        int count = 0; 
        vector<int> array;
        
        
        for (int i = 0; i < n; i++) { 
            int x; cin >> x;
             array.push_back(x); } 


        for (int i = 0; i < n ; i++) 
        { if (array[i] != 0) { 
            if ( !flag){ count++; flag = true; } }
            
            
            else { flag = false; } } 
            
            
            
        if (count == 0) cout << 0 << endl; 
        else if (count == 1) cout << 1 << endl; 
        else cout << 2 << endl; 
    
    }
}
