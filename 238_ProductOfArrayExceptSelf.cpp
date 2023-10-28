class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> products;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            left.push_back(1);
            right.push_back(1);
            products.push_back(1);
        }
        //Left vector
        
        for (int i = 1; i < n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
        
        //Right vector
        for (int i = n-2; i >=0; i--){
            right[i] = nums[i+1] * right[i+1];
        }
        //Calculate products
        for(int i = 0; i < n; i++){
            products[i] = right[i] * left[i];
        }
        
        return products;
    }
};
