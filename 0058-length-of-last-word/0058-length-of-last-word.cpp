class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int right;
        for(right = n - 1 ; right >= 0 ; right--){
            if(s[right] != ' '){
                break;
            }
        }
        int left = right ; 
        while(left >= 0 && s[left] != ' ') left-- ; 
        int len = right - left; 
        return len;
        
    }
};