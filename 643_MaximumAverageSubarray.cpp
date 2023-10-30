class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg = 0.0;
        int sum = 0;

        //Base case
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        avg = (double)sum / (double)k;

        
        for (int i = 1; i < n - k + 1; i++){
            sum = sum - nums[i-1] + nums[i + k - 1];
            double v = (double)sum / (double)k;
            if (v > avg){
                avg = v;
            }
        }
        return avg;

    }
};
