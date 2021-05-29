class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result(m+n);
        int I=0,J=0,K=0;
        while(I<m&&J<n)
        {
            if(nums1[I]<=nums2[J])
            {
                result[K] = nums1[I];
                I++;
            }
            else
            {
                result[K] = nums2[J];
                J++;
            }            
            K++;
        }
        
        while(I<m)
        {
            result[K] = nums1[I];
            I++;
            K++;
        }
        
        while(J<n)
        {
            result[K] = nums2[J];
            J++;
            K++;
        }
        
        nums1 = result;
    }
};