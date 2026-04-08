class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int l = 1;
        int r = piles[piles.size()-1];
        long long hrs_so_far = 0;
        int k = 0;
        while(l<=r){
             int mid = (l+r)/2;
             for(int i =0; i<piles.size(); i++){
               //⌈a/b⌉=(a+b−1)/b
                    hrs_so_far += (piles[i] + mid - 1) / mid;
                
             }
             if(hrs_so_far >h){
                l = mid +1;
             }
             else{
                k = mid;
                r = mid -1;
             }

             hrs_so_far = 0;
        }

        return k;
    }
};