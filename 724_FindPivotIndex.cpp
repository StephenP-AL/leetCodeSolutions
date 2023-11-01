lass Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int rsum = 0; //A sum of all the numbers to the right of the pivot candidate

        // Initialize rsum to the sum of values to the right of index 0
        for (int i = 1; i < n; i++){
            rsum += nums[i];
        }
        // Edge case: pivot at index 0
        if (rsum == 0){
            return 0;
        }
        
        int lsum = 0;// Sum of all values left of the pivot candidate

        // itterate through vector, adding to left sum and subtracting from right as we go
        for (int i = 1; i < n; i++){
            lsum += nums[i-1];
            rsum -= nums[i];
            // Check candidate pivot, and return if balanced
            if (lsum == rsum){
                return i;
            }
        }
        //Fail to find balanced pivot.
        return -1;
    }
};
