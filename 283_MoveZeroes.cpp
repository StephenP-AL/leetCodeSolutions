class Solution {
public:
    void moveZeroes(vector<int>& nums) {
   
        int i,j,n;
        i = j = 0;
        n = nums.size();
        while(j < n){
            while( j < n  && nums[j] == 0){
                j++;
            }
            if (j >= n){
                break;
            }
            nums[i] = nums[j];
            i++;
            j++;
        }
        for(int k = i; k < n; k++){
            nums[k] = 0;
        }
    }
};
