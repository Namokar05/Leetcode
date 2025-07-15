class Solution {
public:
    void solve(int index, int target, vector<int>& nums, vector<int>& current, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(current); 
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1]) continue;
            if (nums[i] > target) break;
            current.push_back(nums[i]); 
            solve(i + 1, target - nums[i], nums, current, ans); 
            current.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> ans;
        vector<int> current;
        solve(0, target, candidates, current, ans);
        return ans;
    }
};
