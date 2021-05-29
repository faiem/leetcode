#include <regex>
using namespace std;
class Solution {
public:
    string interpret(string command) {
       
        string output;
        int size = command.length();
        int I=0;
        for(I=0;I<size;I++)
        {
            if(command[I] == 'G')
                output+="G";
            else if(command[I] == '(' && command[I+1] == ')')
            {
                output+="o";
                I++;
            }
            else
            {
                output+="al";
                I+=3;
            }
        }
        
        return output;
    }
};