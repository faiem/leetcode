class Solution {
public:
    
    int countBit(int x)
    {   
        int c = 0;
        while(x>0)
        {
            x &= (x-1);
            c++;
        }
        return c;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int,int>> bit_store(arr.size());
        vector<int> result(arr.size());
        for(int I=0;I<arr.size();I++)
        {
            bit_store[I].first = arr[I];
            bit_store[I].second = countBit(arr[I]);
        }
        
        sort(bit_store.begin(), bit_store.end(), mycompareFunction);
        
        for(int I=0;I<bit_store.size();I++)
        {
            result[I] = bit_store[I].first;
        }
        
        return result;
    }
    
    static bool mycompareFunction(pair<int,int> &p1, pair<int,int> &p2)
    {
        if(p1.second < p2.second)
            return true;
        else if(p1.second == p2.second)
            return p1.first < p2.first;
    return false;
    }
};