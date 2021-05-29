class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressedList;
        
        for(int I=0;I<nums.size();I+=2)
        {
            vector<int> vecOfInt(nums[I], nums[I+1]);
            decompressedList.insert(decompressedList.end(), vecOfInt.begin(), vecOfInt.end());
        }
        return decompressedList;
    }
};