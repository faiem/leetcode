class Solution {
public:
    
    int wordConverterToInt(string word)
    {
        int res = 0;
        
        int length = word.length();
        
        for(int I=0;I<word.length();I++)
        {
            res += (word[I] - 'a') * pow(10, length-1);
            length--;
        }
        
        
        return res; 
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        if(wordConverterToInt(firstWord) + wordConverterToInt(secondWord) == wordConverterToInt(targetWord))
            return true;
        return false;
    }
};