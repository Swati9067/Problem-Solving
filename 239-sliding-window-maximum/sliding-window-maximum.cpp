class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        vector<int> ans;
        map<int, int> mp;
        int j =0;
        int i =0;
        //max = nums[0];

        while(j<nums.size()){
          mp[nums[j]]++;
          if(j-i+1 == k){
            auto it = mp.end();
            --it;
            ans.push_back(it->first);
            mp[nums[i]]--;
            if (mp[nums[i]] == 0) mp.erase(nums[i]); 
            i++;
           }
          j++;
        }

          return ans;
        
    }
};