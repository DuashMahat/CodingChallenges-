

// version one with unordered map: faster 
vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int ,int> m;
       m.reserve(nums.size());
       for (int i = 0; i < nums.size(); ++i ) {
         auto iter = m.find(target - nums[i]);  // this is an iterator for it 
         if (iter != m.end()) return {iter->second , i};
         m[nums[i]] = i;
         //m.emplace (nums[i] , i );
       }
       return {};
    }


// version two with map : slower a bit 


vector<int> twoSum(vector<int>& nums, int target) {
      map<int , int> m;
      for (int i = 0; i < nums.size(); ++i ) {
        auto it = m.find(target - nums[i]);
        if (it != m.end()) return {it->second , i};
        m[nums[i]] = i;
      }
     return {};
}
