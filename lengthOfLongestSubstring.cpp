 int lengthOfLongestSubstring(string s) {
       int len = 0 , left = -1;
       vector<int> v (128 , -1);
       for (int i = 0; i < s.size(); ++i ) {
        
          left = max (left , v[s[i]]);  // 0 
           
          v[s[i]] = i; // i = 0 
           
          len = max ( len , i - left);  // 1  // 2 
           
       }
        
        return len;
        
        // ababcbb"
       //  0    1   -1    -1
       //  [97] [98]  [99] [100]
             
    }
