class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int res = 0;
        
        sort(nums.begin(), nums.end());
        
        int a=0,b=nums.size()-1;
        
        while(a<b)
        {
            int max_pair = nums[a] + nums[b];
            res = max(res, max_pair);
            a++;
            b--;
        }
    return res;
    }
};