#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    bool flag[1000][1000];
    
    
    int convertWordToInt(string word)
    {
        int x = 0;
        for(int I=0;I<word.length();I++)
        {
            int mask = 1<<(word[I]-'a');
            x |= mask;
            //cout<<"->"<<x<<" "<<word[I]<<endl;
        }
        //cout<<"->"<<x<<endl;
        return x;
    }
    
    
    int maxProduct(vector<string>& words) {
    
        vector<int> word_int;
        unsigned long max_out = 0;
        int total_words = words.size();
        for(int I=0;I<total_words;I++)
        {
            int x = convertWordToInt(words[I]);
            word_int.push_back(x);
            //cout<<x<<endl;
        }
        cout<<endl;
 
        for(int I=0;I<total_words-1;I++)
        {
            for(int J=I+1;J<total_words;J++)
            {
                if(flag[I][J] || flag[J][I])
                {
                    continue;
                }
                
                bool hasCommonLetter = word_int[I] & word_int[J];
                //cout<<hasCommonLetter<<endl;
                
                if(!hasCommonLetter)
                {
                    max_out = max(max_out, (words[I].length() * words[J].length()));
                }
                
                flag[I][J] = true;
                flag[J][I] = true;
            }
            //cout<<endl;
            
        }
        
        return max_out;
    }
};