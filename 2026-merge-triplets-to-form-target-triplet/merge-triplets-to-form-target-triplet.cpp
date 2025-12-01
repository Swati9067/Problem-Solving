class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int x = target[0];
        int y = target[1];
        int z = target[2];

        bool x1 = false, y1 = false, z1 = false;

        for(auto t: triplets){
            if(t[0]> x || t[1]>y || t[2]>z) continue;

            if(t[0]==x) x1 = true;
            if(t[1]==y) y1 = true;
            if(t[2]==z) z1 = true;

        }

        return (x1 && y1 && z1);
    }
};