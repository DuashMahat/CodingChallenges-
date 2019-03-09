 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (auto val : nums1)  v.push_back(val);
        for (auto val : nums2)  v.push_back(val);
        sort(v.begin() , v.end());
        int s = v.size();
        if (v.size() % 2 == 0 ) return ( (v[s/2] + v[s/2 - 1] ) * 1.0 / 2.0);
        else return v[s/2] * 1.0;
      }
