class Solution {
public:
    bool isPalindrome(string s) {

            int left = 0;
            int right = s.length() - 1;
           
            while(left < right){
                 while(left < right && !isalnum(s[left])){
                left++;
            }
            // If the right character isn't a letter or number, just move past it
            while (left < right && !isalnum(s[right])) {
            right--;
            }
                if(tolower(s[left]) != tolower(s[right])){
                    return false;
                }
                left++;
                right--;

            }
            return true;
        
    }
};
