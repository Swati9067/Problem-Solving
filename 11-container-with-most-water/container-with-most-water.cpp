class Solution {
public:
    int maxArea(vector<int>& h) {
        int max_area = 0;
        int i = 0;
        int j = h.size()-1;

        while(i<=j){
            max_area = max(max_area, min(h[j],h[i])* (j-i));
            if(h[i]<=h[j]) i++;
            else j--;
        }

        return max_area;
    }
};