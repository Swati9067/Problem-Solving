class Solution {
public:
    int hammingWeight(int n) {
        int check = 1;
        int cnt = 0;
        while(n){
            if (n&1 ==1) cnt ++;
            n = n>>1;
        }

        return cnt ;
    }
};