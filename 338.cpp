class Solution {
public:
    vector<int> countBits(int n) {
        
      vector<int> lookup_table(n+1);   
      lookup_table[0] = 0;
      for (int i = 0; i <= n; i++)
      {
          lookup_table[i] = (i & 1) + lookup_table[i / 2];
      }

      return lookup_table;
    }
};