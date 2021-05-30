class Solution {
public:
    
    int countSetBits(uint32_t x)
    {   
        int c = 0;
        while(x>0)
        {
            x &= (x-1);
            c++;
        }
        return c;
    }
    
    int hammingWeight(uint32_t n) {
        return countSetBits(n);
    }
};