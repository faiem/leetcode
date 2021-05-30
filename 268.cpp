class Solution {
public:
    //Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
    //yes, I can. let's do it..:)
    int missingNumber(vector<int>& nums) {
        
        //Sum all the numbers in that range = n(n+1)/2
        int sumOfRange = nums.size() * (nums.size()+1) / 2;
        
        //sum of all given nums
        int sumOfGiven = 0;
        for(int I=0;I<nums.size();I++)
        {
            sumOfGiven += nums[I];
        }
        
        //difference is the missing number.
        return sumOfRange - sumOfGiven;
    }
};