class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1){
            return s;
        }
        int n = s.length();
        
        string ret = "";
        string temp = "";

        //first row
        for(int i = 0; i < n; i += (2 * numRows - 2)){
            temp = temp + s[i];
        }
        ret = temp;
        temp = "";

        //middle rows
        for(int i = 1; i < numRows - 1; i++){
            for (int j = i; j < n; j += (2 * numRows - 2)){
                temp = temp + s[j];
                int offset = j + 2 * (numRows - 1 - i);
                if (offset < n){
                    temp = temp + s[offset]; 
                }
            }
            ret = ret + temp;
            temp = "";
        }

        //last row
        for(int i = numRows - 1; i < n; i += (2 * numRows - 2)){
            temp = temp + s[i];
        }
        ret = ret + temp;

        cout << ret << endl;
        return ret;
    }
};
