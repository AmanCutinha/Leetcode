class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> v;

        int maxi=*max_element(candies.begin(),candies.end());

        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=maxi){
                v.push_back(true);
            }
            else v.push_back(false);
        }
        return v;
    }
};