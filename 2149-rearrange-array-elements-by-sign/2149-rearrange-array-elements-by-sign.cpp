class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posindx=0, negindx=1;
        for(int i=0;i<n;i++){
            if (nums[i]<0){
                ans[negindx]=nums[i];
                negindx+=2;
            }
            else{
                ans[posindx]=nums[i];
                posindx+=2;
            }
        }
        return ans;
    }
};