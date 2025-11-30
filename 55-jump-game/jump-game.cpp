class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_indx = 0;

        for(int i =0; i<nums.size(); i++){
            if(i > max_indx) return false;

            max_indx = max(max_indx, i + nums[i]);
        }

        return true;
    }
};