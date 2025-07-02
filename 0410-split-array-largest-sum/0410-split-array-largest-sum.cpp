class Solution {
public:
    int array(vector<int>& nums, int ans) {
        int ans2 = 1;
        int sum = 0;  
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= ans) {
                sum += nums[i];
            } else {
                ans2 += 1;
                sum = nums[i];
            }
        }
        return ans2;
    }

    int splitarraylargest(vector<int>& nums, int n, int m) {
        if (m > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int parts = array(nums, mid);  
            if (parts > m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }

    int splitArray(vector<int>& nums, int k) {
        return splitarraylargest(nums, nums.size(), k);
    }
};
