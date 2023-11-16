class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while ( i + 1 < n){
           
            if (nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i + 1);
                n--;
            }
            else{
                i++;
            }
            
        }
        return n;
    }
};
