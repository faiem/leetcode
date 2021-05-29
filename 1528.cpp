class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int len = s.length();
        char output[len+1];
        output[len] = '\0';
        
        for(int I=0;I<s.length();I++)
        {
            output[indices[I]] = s[I]; 
        }
        
        return output;
    }
};