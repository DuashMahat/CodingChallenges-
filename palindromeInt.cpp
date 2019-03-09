


bool isPalindrome(int x) {
      if ( x < 0 ) return false;
      int res = 0 , y = x;
      while ( x != 0 ) {
        if (abs(res) > 214748364) return false;
        res = res * 10 + x % 10;
        x/=10;
      }
        return res == y; 
    }
