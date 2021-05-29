class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        for(int I=0;I<n;I++)
        {
            res ^= (start+I+I);
        }
        return res;
    }
};