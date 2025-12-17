class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i =0;
        int j =0;
        unordered_map<int, int> mp;
        while(j < nums.size()){
         while(j<nums.size() && (j-i)<=k){
            mp[nums[j]]++;
            if(mp[nums[j]]>1) return true;
            j++;
         }

         /*for(auto it: mp){
            if(it.second >1) return true;
         }*/

         mp[nums[i]]--;
         i++;
        }

        return false;
    }
};