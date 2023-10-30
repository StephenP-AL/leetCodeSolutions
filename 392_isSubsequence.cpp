class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.length() == 0){
            return true;
        }
        int pos = t.find(s.at(0));
        cout << s.length() << " " << pos << endl;
        
        //base case, single element
        if (s.length() == 1){
            return (pos >= 0);
        }

        //Substrings for recursion
        string subs = s.substr(1,s.length() - 1);
        string subt = t.substr(pos + 1, t.length() - (pos + 1));
        
        return ((pos >=0) && isSubsequence(subs,subt));
        

    }
};
