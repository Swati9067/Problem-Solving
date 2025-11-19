class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0 || nums.size()==1) return nums.size();
        
        int ans = 1;
        sort(nums.begin(), nums.end());
        //int curr = nums[0];
        int temp_cnt =1;

        for(int i =1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]) continue;

            else if(nums[i]== nums[i-1]+1) {
                temp_cnt++;
            }
            else{
                temp_cnt =1;
            }

             ans = max(ans, temp_cnt);
        }

        return ans;
    }
};