class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
             }
             vector<vector<int>> buckets(nums.size() + 1);
            for (auto& pair : mp) {
            int element = pair.first;       // The actual number (e.g., 1)
            int frequency = pair.second;   // How many times it appeared (e.g., 3)
            buckets[frequency].push_back(element);
            }
            for (int i = buckets.size() - 1; i >= 0; i--) {
            for(int element: buckets[i]){
             result.push_back(element);
             if(result.size() == k){
                return result;
             } 
            }  

            }

        }
      
};
