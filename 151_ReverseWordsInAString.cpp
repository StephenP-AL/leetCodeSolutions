class Solution {
public:
    string reverseWords(string s) {
  
        vector<string> list; // store individual words in a vector
        
        //Parse words to store in the vector
        int  i = 0; //indicates the starting position of the word

        while (i < s.length() ){
            //Skip over spaces
            while(i < s.length() && s.at(i) == ' ') {
                i++;
            }
            if (i >= s.length()){
                break;
            }
            int e = s.find(' ',i);
            if (e < 0){
                e = s.length();
            }
            list.push_back(s.substr(i,e - i));// Add word to the list
            i = e;
                    
        }
        //Build up return value in reverse order
        string r = list[list.size() - 1];
        for (int i = list.size() - 2; i >=0; i--){
            r = r + " " + list[i];
        }
            
        return r;
    }

};
