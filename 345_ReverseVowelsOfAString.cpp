class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() -1;
        
        cout << s << " | " << i  << " " << j <<" - " <<  s.at(j) << endl;

        while (i < j){
           while(!isVowel(s.at(i)) && i < j){
                i++;
            }
            
            while (!isVowel(s.at(j)) && i < j){
                j--;
            }   
            if (i >= j){
                break;
            }
            swap(s[i],s[j]);
            
            i++;
            j--;
            
        }
        return s;
    }
private:
    bool isVowel(char c){
        if (c <97){
            c += 32;
        }
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
                break;
            default:
                return false;
        }
    }

};
