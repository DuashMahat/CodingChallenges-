 /* postorder traversal to save all values in a vector  */
    void postorder ( TreeNode * root , vector<int> & v ) {
      if (!root ) return;
      if (!(!root->left)) postorder (root->left , v);
      if (!(!root->right)) postorder (root->right , v);
      v.push_back(root->val);
    }

    
    bool findTarget(TreeNode* root, int k) {
       if (!root) return false;
       vector<int> nums;
       postorder (root , nums);
       unordered_map<int ,int> m;
       m.reserve(nums.size());
       for (int i = 0; i < nums.size(); ++i ) {
         auto iter = m.find(k - nums[i]);  // this is an iterator for it 
         if (iter != m.end()) return true;
         m.emplace (nums[i] , i);
       }
      return false;
    }
