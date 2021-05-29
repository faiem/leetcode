class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    {
        vector<string> output;
        
        for(int I=0;I<words.size();I++)
        {
            for(int J=0;J<words.size();J++)
            {
                if(I==J)
                {
                    continue;
                }
                
                if(words[J].find(words[I])!=-1)
                {
                    output.push_back(words[I]);
                    break;
                }
            }
        }
        return output;
    }
};