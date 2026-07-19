class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.rbegin(), nums.rend());
        long long sum = 0;
        int i = 0;
        while (i < k)
        {
            if (mul == 0)
            {
                mul = 1;
            }
            sum += (mul)*(nums[i]);
            i++;
            mul--;
        }

        return sum;
        
    }
};
