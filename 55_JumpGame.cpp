class Solution {
public:
    bool canJump(vector<int>& nums) {
        int min = 0;
        for (int i = nums.size() - 2; i >= 0; i--){
            min++;
            if (nums[i] >= min){
                min = 0;
            }
        }
        return(min == 0);    
        
    }
    
};
