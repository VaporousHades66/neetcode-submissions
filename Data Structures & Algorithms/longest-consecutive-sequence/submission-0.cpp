class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestNum = 0;
        int currentLength; 
        std::unordered_set<int> numSet(nums.begin(), nums.end());

        for(int num: numSet){
            if(!numSet.count(num - 1)){
                currentLength = 1;
                while(numSet.count(num + currentLength)){
                    currentLength++;
                }
                longestNum = std::max(longestNum, currentLength);
            }

        }
        return longestNum;
    }
};
