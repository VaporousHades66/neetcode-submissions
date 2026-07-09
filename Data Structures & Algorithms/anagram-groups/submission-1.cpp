class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> res;
            for(int i = 0; i <strs.size();i++){    
                string s = strs[i];
                sort(s.begin(), s.end());
                res[s].push_back(strs[i]);
            }
            vector<vector<string>> result;
            for(auto const& [key,val] : res){
                result.push_back(val);
            }
            return result;

    
        }
};
