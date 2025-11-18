class Solution {
public:
    int pydramidsum (vector<int>& nums){
        
        if(nums.size()==1) return nums[0];
        vector<int>curr;

        for(int i =0; i<nums.size()-1; i++){
            int sum = (nums[i]+nums[i+1])%10;
            curr.push_back(sum);
        }
        
        return pydramidsum (curr);
    }
    
    int triangularSum(vector<int>& nums) {
        if(nums.size()==0) return 0;
        return pydramidsum(nums);  
    }
};