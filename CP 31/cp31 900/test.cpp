// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int t,end;
    t = 5;
    vector<int> nums(t), counts(t,0);
    //cin>>t;
    // for(int i=0; i<t; i++)
    //     cin>>nums[i]
    nums = {{100},{71345},{3259},{50555},{2050047}};
    for(int i=0; i<t; i++)
    {
    
        while(nums[i]>=1)
        {
            if((nums[i]%10) == 0)
            {
                nums[i] /= 10;
                if(nums[i]%10 == 0 ||nums[i]%10 == 5)
                    break;
                else
                {
                    while(nums[i]%10 != 0 && nums[i]%10 != 5)
                    {
                        nums[i] /= 10;
                        counts[i]++;
                    }
                    break;
                }
            }else if((nums[i]%10) == 5)
            {
                nums[i] /= 10;
                if(nums[i]%10 == 2 ||nums[i]%10 == 7)
                    break;
                else
                {
                    while(nums[i]%10 != 2 && nums[i]%10 != 7)
                    {
                    nums[i] /= 10;
                    counts[i]++;
                    }
                    break;
                }
            }
            else
            {
                nums[i]/=10;
                counts[i]++;
            }
        }
    }
    for(int i=0; i<t; i++)
        cout<<counts[i]<<endl;
    return 0;
}