class Solution {
public:
    
    int sumOfNum(int n)
    {
        return (n*(n+1))/2;
    }
    
    int numIdenticalPairs(vector<int>& nums) {
        int pairs = 0;
        map<int, int> c;
        for(int I=0;I<nums.size();I++)
        {
            c[nums[I]]++;
        }
        
        for (auto it = c.cbegin(); it != c.cend(); ++it) 
        {
            if((*it).second > 1)
            {
                 pairs += sumOfNum((*it).second - 1);
            }
        }
        
        return pairs;
    }
};