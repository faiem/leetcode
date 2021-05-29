


class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int matchCount = 0, rv = 0;
        
        if(ruleKey == "type")
        {
            sort(items.begin(), items.end(), compareVectorByType);
            rv = 0;
        }
        else if(ruleKey == "color")
        {
             sort(items.begin(), items.end(), compareVectorByColor);
             rv = 1;
        }
        else if(ruleKey == "name")
        {
             sort(items.begin(), items.end(), compareVectorByName);
             rv = 2;
        }
        
        matchCount = countOcc(items, ruleValue, rv);
        
        /*
        for(int I=0;I<items.size();I++)
        {
            for(int J=0;J<3;J++)
                cout<<items[I][J]<<" ";
            cout<<endl;
        }
        
        cout<<"------------"<<endl;
       */
        return matchCount;
    }
    
    static bool compareVectorByType(vector<string> i1, vector<string> i2)
    {
        return (i1[0] < i2[0]);
    }
    
    static bool compareVectorByColor(vector<string> i1, vector<string> i2)
    {
        return (i1[1] < i2[1]);
    }
    
    static bool compareVectorByName(vector<string> i1, vector<string> i2)
    {
        return (i1[2] < i2[2]);
    }
    
    int firstOcc(vector<vector<string>>& arr, string x, int compareIdx)
    {
        int n = arr.size();
        int low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(x > arr[mid][compareIdx])
                low = mid + 1;

            else if(x < arr[mid][compareIdx])
                high = mid - 1;

            else
            {
                if(mid == 0 || arr[mid - 1][compareIdx] != arr[mid][compareIdx])
                    return mid;

                else
                    high = mid - 1;
            }

        }

        return -1;
    }

    int lastOcc(vector<vector<string>>& arr, string x, int compareIdx)
    {
        int n = arr.size();
        int low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(x > arr[mid][compareIdx])
                low = mid + 1;

            else if(x < arr[mid][compareIdx])
                high = mid - 1;

            else
            {
                if(mid == n - 1 || arr[mid + 1][compareIdx] != arr[mid][compareIdx])
                    return mid;

                else
                    low = mid + 1;
            }

        }

        return -1;
    }

    int countOcc(vector<vector<string>>& arr, string x, int compareIdx)
    {
        
        int first = firstOcc(arr, x, compareIdx);
        //cout<<first<<endl;
        if(first == -1)
            return 0;
        else 
            return lastOcc(arr, x, compareIdx) - first + 1;
    }
    
};