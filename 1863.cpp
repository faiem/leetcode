class Solution {
public:
    
    int subsetXORSum(vector<int>& nums) {
        
        int size = nums.size();
        int comb = 1<<size;
        int c = 0, y=0, xor_sum=0, xorP=0  ;
        for(int I=0;I<comb;I++)
        {
            c=0;
            y=I;
            xorP=0;
            while(y>0)
            {
                if(y&1)
                {
                    xorP^=nums[c];
                }
                y=y>>1;
                c++;
            }
            xor_sum += xorP;
        }
    
        return xor_sum;
    }
};