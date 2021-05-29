class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int p_digits = 1;
        int s_digits = 0;
        
        while(n>0)
        {
            int d = n%10;
            s_digits += d;
            p_digits *= d;
            n/=10;
        }
        
        return p_digits - s_digits;
    }
};