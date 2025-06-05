class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            xor1^= i;
        }

        // XOR all numbers in the array
        for (int i = 0; i <n; i++) {
            xor2^=nums[i];
        }

        // Missing number is the difference
        return xor1 ^ xor2;
    }
};
