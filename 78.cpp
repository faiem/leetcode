class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        
        int subsetSize = 1<<nums.size();
        vector<vector<int>> v(subsetSize);
        
        //v[0].push_back(null);
        
        for(int I=1;I<subsetSize;I++)
        {
            int c=0;
            int x = I;
            //Power set
            while(x>0)
            {
                if(x&1)
                    v[I].push_back(nums[c]);
                x = x>>1;
                c++;
            }
        }

    return v;
    }
};