class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longest=0,count=0,n=nums.size(),lastsmallest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmallest){
                count+=1;
                lastsmallest=nums[i];
            }
            else if(lastsmallest!=nums[i]){
                count=1;
                lastsmallest=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;

        
    }
};