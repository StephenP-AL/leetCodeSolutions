class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n / 2;
        unordered_map<int,int> store;

        for (int i = 0; i < n; i++){
            store[nums[i]]++;
            cout << store[nums[i]] << endl;
         
        }
        for (auto i:store){
            if (i.second > m){
                return i.first;
            }
        }
        
        return 0;
    }
};
