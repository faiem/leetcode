class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        bool up = false, down = false;
        
        for(int I=1;I<a.size();I++)
        {
            if(a[I-1]<a[I])
                up = true;
            else if(a[I-1]>a[I])
                down = true;
            if(up & down)
                return false;
        }
        
        return true;
    }
};