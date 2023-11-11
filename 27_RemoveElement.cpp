lass Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++){
            cout << nums[i] << " " << val << " " << nums.size() << endl;
            if (nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
