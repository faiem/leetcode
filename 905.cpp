class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> evenList;
        vector<int> oddList;
        for(int I=0;I<nums.size();I++)
        {
            if(nums[I]&1)
            {
                oddList.push_back(nums[I]);
            }
            else
            {
                evenList.push_back(nums[I]);
            }
        }
        
        evenList.insert(evenList.end(), oddList.begin(), oddList.end());
        
        return evenList;
    }
};