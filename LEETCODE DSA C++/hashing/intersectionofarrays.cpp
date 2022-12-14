   //https://leetcode.com/problems/intersection-of-two-arrays/
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans; 
      set<int>s(nums1.begin(),nums1.end()) ; 
        for(auto i : nums2){
            if(s.find(i)!=s.end()) {ans.push_back(i); s.erase(i);}
        }
        return ans; 
    }
    //Array of intersection 2 where duplicate allowed 
     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans; 
        unordered_map<int,int> m ; 
        for(auto i : nums1 ) m[i]++ ; 
        for(auto i : nums2) {
            if(m[i]>0){ans.push_back(i) ; m[i]-- ;}
        }
        return ans; 
    }