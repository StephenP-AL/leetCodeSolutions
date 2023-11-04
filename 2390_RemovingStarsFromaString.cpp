class Solution {
public:
    string removeStars(string s) {
        unsigned long int n = s.length();
        stack<char> hold;
        
        // Edge case, no * in the string
        unsigned long int p = s.find('*');
        if (p < 0 || p >=n){
            return s;
        }

        // Push characters onto the stack
        for(unsigned long int i = 0; i < n; i++){
            if(s[i] == '*'){
                hold.pop();
            }
            else{
                hold.push(s[i]);
            }
        }
        // Resize the string
        n = hold.size();
        s = s.substr(0,n);

        // Replace characters in the string from back to front with those on the stack
        for(int i = n - 1; i >=0; i--){
            s[i] = hold.top();
            hold.pop();
        }
        

        return s;
    }
};
