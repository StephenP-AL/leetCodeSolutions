class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(),nums1.end());
        set<int> set2(nums2.begin(),nums2.end());
        vector<vector<int>> ret = {{},{}};

        for (auto val : set1){
            if (set2.count(val) == 0){
                ret[0].push_back(val);
            }
        }
        for (auto val : set2){
            if (set1.count(val) == 0){
                ret[1].push_back(val);
            }
        }
        return ret;
    }
};
