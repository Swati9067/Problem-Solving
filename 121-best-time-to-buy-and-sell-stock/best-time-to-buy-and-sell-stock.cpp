class Solution {
public:
    int maxProfit(vector<int>& p) {
        int s = p.size();
        int maxe = p[s-1];
        int ans = 0;
        for(int i= s-2; i>=0; i--){
            if(p[i]<maxe){
                ans =max(ans,abs(p[i]-maxe));
            }

            else{
                maxe =p[i];
            }
        }
         
         return ans;
    }
};