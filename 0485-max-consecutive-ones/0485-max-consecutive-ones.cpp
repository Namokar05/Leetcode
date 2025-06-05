class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxicount=0;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxicount=max(maxicount,count);
            }
            else{
                count=0;
            }
        }
        return maxicount;
    }
};