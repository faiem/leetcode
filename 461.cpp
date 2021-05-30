class Solution {
public:
    
    int countSetBits(int x)
    {   
        int c = 0;
        while(x>0)
        {
            x &= (x-1);
            c++;
        }
        return c;
    }
    
    int hammingDistance(int x, int y) {
        return countSetBits(x^y);
    }
};