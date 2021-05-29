class Solution {
public:
    int numberOfSteps(int num) {
        int step_count = 0;
        
        while(num>0)
        {
            if(num&1)
                num-=1;
            else
                num = num>>1;
            step_count++;
        }
        
        return step_count;
    }
};