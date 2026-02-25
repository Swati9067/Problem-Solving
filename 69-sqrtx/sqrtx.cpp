class Solution {
public:
    int mySqrt(int x) 
    {
        int l =1;
        int h = x;
        int ans = x;

        while(l<=h){
            int mid = l + (h - l) / 2;
            long long temp =  1ll* mid * mid;

            if(temp == x){
                ans = mid;
                break;
            }
            else if(temp> x){
             h = mid -1;
            }

            else{
                l = mid +1;
                ans = mid;
            }

        }

        return ans;
    }
};