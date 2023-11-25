class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> key;

        key['I'] = 1;
        key['V'] = 5;
        key['X'] = 10;
        key['L'] = 50;
        key['C'] = 100;
        key['D'] = 500;
        key['M'] = 1000;

        int value = 0;
        for (int i = 0; s.length() > i; i++){
            if(key[s[i]] < key[s[i+1]]){
                value -= key[s[i]];
            }
            else{
                value += key[s[i]];
            }
        }
        return value;
    }
};
