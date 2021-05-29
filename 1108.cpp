class Solution {
public:
    string defangIPaddr(string address) {
        string newIP = "";
        int len = address.length();
        for(int I=0;I<len;I++)
        {
            if(address[I]=='.')
            {
                newIP += "[.]";
            }
            else
            {
                newIP += address[I];
            }    
            
        }
        return newIP;
    }
};