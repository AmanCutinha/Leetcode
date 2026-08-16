class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=-1;
        int bestDis=INT_MAX;

        for(int i=0;i<drones.size();i++){
            int dis= abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);

            if(dis<=drones[i][2]){
                if(dis<bestDis){
                    bestDis=dis;
                    ans=i;
                }
            }
        }
        return ans;
    }
};