class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN , sum=0;
        for(int i:nums){
            sum +=i;
            maxsum=max(sum,maxsum);
            if (sum<0) {
                sum=0;
            }
        }
        return maxsum;

        
    }
};