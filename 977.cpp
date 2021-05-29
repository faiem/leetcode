class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        priority_queue <int, vector<int>, greater<int>> pq;
        vector<int> output;      
        for(int I=0;I<nums.size();I++)
        {
            pq.push(nums[I]*nums[I]);
        }
        
        while(!pq.empty())
        {
            output.push_back(pq.top());
            pq.pop();
        }
        
        return output;
    }
};