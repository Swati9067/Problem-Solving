class Solution {
public:
    /*vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
          priority_queue<pair<long long, pair<int,int>>> pq;

          for(int i =0; i<p.size(); i++){
              //long long dis = sqrt(pow(p[i][0], 2) + pow(p[i][1], 2)); sqrt return double
              pq.push({dis, {p[i][0],p[i][1]}});
              if(pq.size()>k) pq.pop();
          }

          vector<vector<int>> ans;
          while(!pq.empty()){
             //pair<int,int> temp = pq.top().second;
            
             auto temp = pq.top().second;
             ans.push_back({temp.first, temp.second});
             pq.pop();

          }

          return ans;*/
        vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<long long, pair<int,int>>> pq;

        for (auto &pt : p) {
            long long x = pt[0], y = pt[1];
            long long dis = x*x + y*y;   // squared distance (correct)

            pq.push({dis, {pt[0], pt[1]}});

            if (pq.size() > k)
                pq.pop();
        }

        vector<vector<int>> ans;
        while (!pq.empty()) {
            auto temp = pq.top().second;
            pq.pop();
            ans.push_back({temp.first, temp.second});
        }

        return ans;
    }
    


};