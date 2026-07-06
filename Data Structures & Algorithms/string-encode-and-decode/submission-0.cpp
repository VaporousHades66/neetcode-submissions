class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        string str;
        for(int i = 0; i <strs.size(); i++){
            result += to_string(strs[i].length()) + '#' + strs[i];
        }
        return result;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.length() ){
            int j = s.find('#', i);
            int len = stoi(s.substr(i, j - i));
            i = j + 1 + len;
            res.push_back(s.substr(j + 1, len));
 
        }
        return res;
    }
};
