class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int arr_size = nums.size();
        int result = 0;
        while(arr_size>0)
        {
            //cout<<nums[arr_size-2]<<endl;
            result+= nums[arr_size-2];
            arr_size-=2;
        }
        
        //cout<<"--------"<<endl;
        
       return result;
    }
};