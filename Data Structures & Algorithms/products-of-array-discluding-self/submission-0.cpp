class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 1. Setup your output vector
vector<int> output(nums.size(), 1);
int curr_product = 1;

// 2. LOOP 1: The Forward Pass (Missing from your current code!)
for(int i = 0; i < nums.size(); i++) {
    output[i] = curr_product;
    curr_product = curr_product * nums[i];
}

// 3. Reset the tracker for the next pass
curr_product = 1;

// 4. LOOP 2: The Backward Pass (The one you currently have on lines 8-12)
for(int i = nums.size() - 1; i >= 0; i--) {
    output[i] *= curr_product;
    curr_product = curr_product * nums[i];
}

return output;
    }
};
