class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sumArr[nums.size()];
        map<int, int> mp;
        int max_sum = 0, partial_sum = 0;
        int I, J, lastMatchInx = 0;
        
        mp[nums[0]]=0;
        partial_sum = nums[0];
        sumArr[0]=nums[0];
        for(I=1;I<nums.size();I++)
        {
                sumArr[I] = 0;
                //found a previously occured number
                
                if(mp.count(nums[I]) && mp.at(nums[I])>=lastMatchInx)
                {
                    //cout<<mp.at(nums[I])<<" "<<lastMatchInx<<endl;
                    
                        max_sum = max(max_sum, partial_sum);
                        int mp_idx = mp.at(nums[I]);
                        //cout<<I<<" "<<nums[I]<<" "<<partial_sum<<" "<<max_sum<<" "<<mp.at(nums[I])<<endl;
                        partial_sum=sumArr[I-1]-sumArr[mp_idx];
                        //cout<<"-->"<<sumArr[I-1]<<" "<<sumArr[mp.at(nums[I])]<<endl;
                        //cout<<I<<" "<<nums[I]<<" "<<partial_sum<<" "<<max_sum<<" "<<mp.at(nums[I])<<endl;
                        lastMatchInx = mp_idx;
                        //mp.erase(nums[I]);
                    
                }
                
                partial_sum+=nums[I];
                mp[nums[I]]=I;
                sumArr[I] = nums[I] + sumArr[I-1];
        }
        
        max_sum = max(max_sum, partial_sum);
        
        //cout<<"-------------"<<endl;
        return max_sum;
    }
};