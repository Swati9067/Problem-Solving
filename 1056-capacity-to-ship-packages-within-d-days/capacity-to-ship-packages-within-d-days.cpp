class Solution {
public:
    int shipWithinDays(vector<int>& wght, int days) {
        int total_wght = 0;
        int max_wght = 0;
        for(int i =0; i<wght.size(); i++){
            total_wght += wght[i];
            max_wght = max(max_wght, wght[i]);
        }
        int ans = 0;
        //sort(wght.begin(), wght.end());
        int l = max_wght;
        int h = total_wght;
        int days_so_far = 1;

        while(l<=h){
        int mid = (l+h)/2;
        int load = 0;
        days_so_far = 1;
        for(int i =0; i<wght.size(); i++){
             if(load + wght[i] <= mid){
                load = load + wght[i];
             }
             else{
                days_so_far ++;
               // load = 0;
                load = wght[i];
             }


        }

        if(days_so_far > days){
                l = mid + 1;
            }
            else{
                ans = mid;
                h = mid - 1;
            }

        //days_so_far = 0;
        }
      return ans;
    }
};