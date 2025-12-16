class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size()==1) return 1;
        int curr = nums[0];
        int cnt = 1;
        int j = 0;

        for(int i =1; i<nums.size(); i++){
            if(nums[i]!=curr){
               swap(nums[i],nums[++j]);
               curr = nums[j];
               cnt++;
            }
        }

        return cnt;

    }
};