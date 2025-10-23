class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hm;
        for (int i = 0; i < numbers.size(); ++i) {
            int complement = target - numbers[i];
            if (hm.find(complement) != hm.end()) {
                return {hm[complement] + 1, i + 1}; // 1-based indexing
            }
            hm[numbers[i]] = i;
        }
        return {-1, -1};
    }
};