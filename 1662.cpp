class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "", two = "";
        for(int I=0;I<word1.size();I++)
        {
            one += word1[I];
        }
        for(int I=0;I<word2.size();I++)
        {
            two += word2[I];
        }
        
        return one == two;
    }
};