class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> s;
        
        for(int I=0;I<n;I++)
        {
            s.push_back(nums[I]);
            s.push_back(nums[I+n]);
        }
    
        return s;
    }
};