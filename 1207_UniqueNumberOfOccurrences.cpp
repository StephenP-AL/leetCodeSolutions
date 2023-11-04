class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> set1(arr.begin(),arr.end());
        set<int> counts;
        for (auto val : set1){
            int n = count(arr.begin(),arr.end(),val);
            if (counts.count(n) > 0){
                return false;
            }
            else{
                counts.insert(n);
            }
        }
        
        return true;
    }
    
};
