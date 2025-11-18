class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for(auto x:nums){
            mp[x]++;
        }

        for(auto it: mp){
            if(it.second ==1) ans.push_back(it.first);
        }

        return ans;
    }
};