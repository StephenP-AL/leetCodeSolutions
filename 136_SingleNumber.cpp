class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> numSet;
        int sum = 0;
        for (auto i : nums){
            sum += i;
            numSet.insert(i);
        }
        int sumSet = 0;
        for (auto i : numSet){
            sumSet += i * 2;
        }
        // debug comment cout << numSet.size() << " | " << nums.size()  << " | " << sum << " | " << sumSet << endl;
        return sumSet - sum;
    }
};
