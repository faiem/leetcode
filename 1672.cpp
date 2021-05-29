class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int res = 0;
        int sum = 0;
        
        for(int I=0;I<accounts.size();I++)
        {
            sum = 0;
            for(int J=0;J<accounts[I].size();J++)
            {
                sum += accounts[I][J];       
            }
            res = max(res, sum);
        }
        
        return res;
    }
};