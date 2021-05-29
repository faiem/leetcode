class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> output;
        int size = nums.size();
        int pos, val;
        for(int I=0;I<size;I++)
        {
            pos = index[I];
            val = nums[I];
            //vector insert() function in C++ STL
            //gfg -> https://bit.ly/3fLSuWx
            output.insert(output.begin() + pos, val);
        }
        return output;
    }
};