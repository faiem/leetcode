class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_gap = 0;
        for(int I=1;I<nums.size();I++)
        {
            max_gap = max(max_gap, nums[I] - nums[I-1]);
        }
        return max_gap;
    }
};