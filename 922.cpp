class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int> parity(nums.size());
        int even = 0;
        int odd = 1;
        
        for(int I=0;I<nums.size();I++)
        {
            if(nums[I]&1)
            {
                parity[odd] = nums[I];
                odd+=2;
            }
            else
            {
                parity[even] = nums[I];
                even+=2;
            }
            
        }
        
        return parity;
    }
};