class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char, int> stones_map;
        map<char, int>::iterator it;
        
        int stones_len = stones.length();
        int jewels_len = jewels.length();
        int count = 0;
        
        for(int I=0;I<stones_len;I++)
        {
            stones_map[stones[I]]++;    
        }
        
        //Note: All the characters of jewels are unique.
        for(int I=0;I<jewels_len;I++)
        {
            it = stones_map.find(jewels[I]);
            count += (it==stones_map.end()) ? 0 : it->second;
        }
        
        return count;
    }
};