class Solution {
public:
    int tribonacci(int n) {
        int trib[4];
        trib[0] = 0;
        trib[1] = 1;
        trib[2] = 1;

        if (n < 3 ){
            return trib[n];
        }
        for (int i = 3; i <=n; i++){
            trib[3] = trib[0] + trib[1] + trib[2];
            for (int j = 0; j < 3; j++){
                trib[j] = trib[j+1];
            }
        }
        return trib[3];
    }
};
