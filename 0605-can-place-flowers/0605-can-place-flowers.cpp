class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k=flowerbed.size();
        int j=0;

        for(int i=0;i<k;i++){
            if(flowerbed[i]==0){
                bool l=i==0 || flowerbed[i-1]==0;
                bool r=i==k-1 || flowerbed[i+1]==0;

                if(l && r){
                    flowerbed[i]=1;
                    n--;
                    if(n<=0) return true;
                }
            }
        }
        return n<=0;
    }
};