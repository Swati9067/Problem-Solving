class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        int temp = 0;
        for(auto it: mp){
            if(it.second == 1) {
                temp = it.first;
                break;
            }
        }

        return temp;
    }
};