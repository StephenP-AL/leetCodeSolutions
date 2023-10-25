class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        cout << word1 << " " << word2 << endl;
	int len = word1.length();
	if (len < word2.length()){
		len = word2.length();
	}
	string retword = "";
	for (int i = 0; i < len; i++){
		if (i < word1.length()){
			retword.push_back(word1.at(i));
		}
		if (i < word2.length()){
			retword.push_back(word2.at(i));
		}
	}
	cout << retword << endl;
	return retword;
	}
};
