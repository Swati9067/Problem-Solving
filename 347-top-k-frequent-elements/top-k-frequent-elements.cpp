class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        
        if(k> nums.size()) return ans;
        unordered_map<int, int> mp;
        for(auto x: nums){
            mp[x]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto x: mp){
            pq.push({x.second,x.first});
        }


        
        while(k){
           ans.push_back(pq.top().second);
           pq.pop();
           k--;
        }

        return ans;
    }
};