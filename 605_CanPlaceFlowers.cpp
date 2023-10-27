lass Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n<=0){
            return true;
        }
        if (flowerbed.size()==1 && n == 1){
            return !flowerbed[0];
        }
        int cap = 0;        
        for (int i = 0; i < flowerbed.size(); i++){
            if (i == 0){
                if (!(flowerbed[i] + flowerbed[i+1])){
                    flowerbed[i]++;
                    cap ++;
                }
            }
            else if (i == flowerbed.size() - 1){
                if (!(flowerbed[i] + flowerbed[i-1])){
                    flowerbed[i]++;
                    cap++;
                }
            }
            else{
                if (!(flowerbed[i-1] + flowerbed[i] + flowerbed[i+1])){
                    flowerbed[i]++;
                    cap++;
                }
            }

        }
        return cap >= n;
    }
    
};
