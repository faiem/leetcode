class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int I=1;I<nums.size();I++)
        {
            nums[I] = nums[I-1]+nums[I];
        }
        
    return nums;
    }
};