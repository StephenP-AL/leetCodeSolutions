class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        cout << str1 + str2 << " | " << str2 + str1 << endl;
        if (str1 + str2 != str2 + str1){
            return "";
        }
        int tail = 1;
        int max = 1;
        for (int i = 1; i <= str2.length(); i++){
            string temp = str2.substr(0,i);
            cout << i << " " << temp << " " << str1.find(temp,i) << endl;
        }
        

        return str1;
    }
};
