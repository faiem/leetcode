class Solution {
public:
    string maxValue(string n, int x) {
        
        string res = "";
        int I=0 ;
        char c = '0' + x;
        
        if(n[0] == '-')
        {
            res += "-";
            I=1;
            while(I<n.size() && n[I]<=c)
            {
                res+=n[I];
                I++;
            }
            
            res += c;
            
            while(I<n.size())
            {
                res+=n[I];
                I++;
            }
        }
        else
        {
            while(I<n.size() && n[I]>=c)
            {
                res+=n[I];
                I++;
            }
            
            res += c;
            
            while(I<n.size())
            {
                res+=n[I];
                I++;
            }
            
        }
        return res;
    }
};