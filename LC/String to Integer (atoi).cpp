#include<iostream>
#include<string>
using namespace std;




class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long k = 0;
        bool sign = false;
        bool int_val_check = false;
        bool int_val_nz = false;
        int maxi = INT_MAX;
        int cont = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 43 || s[i] == 45)
            {
                cont++;
            }

            if (cont > 1)
            {
                break;
            }

            if ((s[i] > 57) || (s[i]) == 46 || ((cont == 1 && s[i] == 32))) {
                break;
            }

            if (s[i] <= 57 && s[i] >= 48) {
                int_val_check = true;
                if (s[i] != 48) {
                    int_val_nz = true;
                }
            }


            if ((int_val_check && (s[i] < 48 || s[i] > 57)) || (sign &&  (s[i] < 48 || s[i] > 57))) {
                break;
            }

            if (!int_val_check && s[i] == 45) {
                sign = true;
            }

            if (int_val_nz && (s[i] <= 57 && s[i] >= 48)) {
                k *= 10;
                k += (s[i] - 48);
            }

            if (k > maxi )
            {
                k = maxi;
                if (sign)
                {
                    k+=1;
                }
                break;
            }
        }

        
        return(sign?-1*k:k);
    }
};
