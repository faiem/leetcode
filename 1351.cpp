class Solution {
public:
    
    //using binary search to get the first negative occurance index in a row.
    //return -1 if not found any negative index in the row.
    int getFirstNegIndexInRow(vector<int> row)
    {
        int low = 0;
        int high = row.size() - 1;
        int mid = -1;
        
        while(low<=high)
        {
            mid = low + (high - low) / 2;
            
            if(row[mid]>=0)
            {
                low = mid + 1;
            }
            else
            {
                if(mid-1>=0 && row[mid-1]<0)
                {
                    high = mid - 1;
                }
                else if(row[mid]<0)
                {
                    return mid;
                }
                else
                {
                    break;
                }
            }
        }
        
        return -1;
    }
    
    
    int countNegatives(vector<vector<int>>& grid) {
        
        int colSize = grid[0].size();
        int negIndex = 0, count = 0;
        
        for(int I=0;I<grid.size();I++)
        {
            negIndex = getFirstNegIndexInRow(grid[I]);
            //cout<<negIndex<<endl;
            if(negIndex >=0)
            {
                count+=(colSize - negIndex);
                //cout<<"->"<<count<<endl;
            }
        }
        
        return count;
    }
};