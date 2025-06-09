class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int val:nums) {
            int frq = 0;
            for(int ele:nums) {
                if (ele == val) {
                    frq++;
                }
            }
            if (frq > n/2) {
                return val;
            }
        }
        return -1;
        
    }
};