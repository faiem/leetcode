class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        set<string> diff;
        map<string, int>::iterator itr;
        
        vector<string> morseCodes {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        
        for(int I=0;I<words.size();I++)
        {
            string code = "";
            string word = words[I];
            for(int J=0;J<word.length();J++)
            {
                code += morseCodes[word[J]-'a'];
            }
            //cout<<code<<endl;
            diff.insert(code);
        }
        
        return diff.size();
    }
};