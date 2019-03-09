


int reverse(int x) {
        
        std::ios::sync_with_stdio(NULL);  // for speed up
        std::cin.tie(NULL);               // for speed up 
        
      int result = 0;
       while ( x != 0 )  {
        if (abs(result) >  214748364  ) return 0;
         result = result * 10 + x % 10;
         x/=10;
      }
      return result;
}
