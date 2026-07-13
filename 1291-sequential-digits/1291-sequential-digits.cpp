class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int mini=to_string(low).size();
        int maxi=to_string(high).size();
        vector<int> ans;

        string s="123456789";
        for(int i=mini;i<=maxi;i++){
            for(int j=0;i+j<=9;j++){
                int num=stoi(s.substr(j,i));
                if(num>=low && num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};