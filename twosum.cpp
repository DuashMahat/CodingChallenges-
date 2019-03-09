


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
