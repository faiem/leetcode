class Solution {
public:
    
    bool checkPwr2(int x)
    {   
        int c = 0;
        while(x>0)
        {
            if(c>1)
                break;
            x &= (x-1);
            c++;
        }
        return c==1;
    }
    
    bool isPowerOfTwo(int n) {
        return checkPwr2(n);
    }
};