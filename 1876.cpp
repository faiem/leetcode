class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int count = 0;
        
        if(s.length()<3)
            return 0;
        
        for(int I=0;I<s.length()-2;I++)
        {
            if(s[I]!=s[I+1] && s[I] != s[I+2] && s[I+1] != s[I+2])
                count++;
            //cout<<s[I]<<s[I+1]<<s[I+2]<<endl;
        }
        
        return count;
    }
};