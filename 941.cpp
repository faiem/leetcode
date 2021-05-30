class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int arr_size = arr.size();
        
        //two pointer approach
        int left = 0;
        int right = arr_size-1;
        
        
        //climb the mountain from left side
        //stop when find the pick point
        while(left<arr_size-1)
        {
            //if find the start of decreasing or equal point, STOP
            if(arr[left+1]<=arr[left])
                break;
            left++;
        }
        
        //ALSO if the left pointer stops at the 0 index then there is no increasing sequence available in array.
        if(left == 0)
            return false;
        
        
        //Now start climbing from the right side of the mountain
        while(right>0)
        {
            //if find the start of decreasing or equal point, STOP
            if(arr[right-1]<=arr[right])
                break;
            right--;
        }
        
        //ALSO if the right pointer stops at the arr.size()-1 position then there is no decreasing sequence available in array.
        if(right == arr_size-1)
            return false;
        
        //cout<<left<<" "<<right<<endl;
       
        //if two pointer meets at same index, then it's a MOUNTAIN ARRAY
        return left == right;
    }
};