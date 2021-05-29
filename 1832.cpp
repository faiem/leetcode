class Solution {
public:
    bool hs[26];
    
    bool checkIfPangram(string sentence) {
        
        memset(hs, false, sizeof(hs));
        int I=0;
        
        for(I=0;I<sentence.size();I++)
        {
            hs[sentence[I]-'a'] = true;            
        }
        
        for(I=0;I<26;I++)
        {
            if(!hs[I])
                return false;
        }
        
        return true;
    }
};