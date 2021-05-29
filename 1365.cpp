class Solution {
public:
    
    //Create a hash, 0 <= nums[i] <= 100
    int hs[101];
    
    //helper to calculate result in O(N) time
    int res[101];
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        //let, nums = [8,1,2,2,3]
        
        
        //Aux space O(N)
        vector<int> output;
        
        //loop -> N times 
        for(int I=0;I<nums.size();I++)
        {
            //count the frequency and store on hash
            hs[nums[I]]++;
        }
     
        //Idx= [0,1,2,3,4,5,6,7,8,9,10...99,100]
        //hs = [0,1,2,1,0,0,0,0,1,0,0,...0,0]
        //represent frequency, 1 is 1 time, 2 is 2 times, 3 is 1 time, 8 is 1 time.
        
        //Constant time operations
        res[0] = hs[0];
        for(int I=1;I<101;I++)
        {
            //add with all previous frequencies
            res[I] = res[I-1] + hs[I];
        }
        
        //Idx= [0,1,2,3,4,5,6,7,8,9,10,...,99,100]
        //res= [0,1,3,4,0,0,0,0,5,5,5,....,5,5]
        
        //loop -> N times
        for(int I=0;I<nums.size();I++)
        {
            //you have to count the number of valid j's such that j != i, so substruct the current number frequency and push to the output vector.
            output.push_back(res[nums[I]]-hs[nums[I]]);
        }
        
        return output;
    }
};