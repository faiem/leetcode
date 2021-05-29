class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int size = encoded.size();
        vector<int> result(size+1);
        int i = 1;
        result[0] = first;
        while(size--)
        {
            first ^= encoded[i-1];
            result[i] = first;
            i++;
        }
        
        return result;
    }
};