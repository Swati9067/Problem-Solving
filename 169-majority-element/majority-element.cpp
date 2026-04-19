class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int maxele = 0;
        for(auto it: nums){
            if(ans == 0)
            { maxele = it;
              ans = 1;
            } 
            
            else if(maxele != it) ans --;
            else ans ++;
        }

       return maxele;
    }
};