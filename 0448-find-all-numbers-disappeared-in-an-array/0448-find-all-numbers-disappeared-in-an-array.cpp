class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int val = 1;
        for(int i=0; i<nums.size(); i++) 
        {
            while(val < nums[i]) 
            {   
                ans.push_back(val);
                val++;
            }
            if(nums[i] == val) val++;
        }
        while(val <= nums.size()) 
        {  
            ans.push_back(val);
            val++;
        }
        return ans;
    }
//please upvote...
};