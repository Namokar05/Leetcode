class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(int i = 0;i<n;i++){
            if (nums[i]==0)
                count0++;
            else if (nums[i]==1)
                count1++;
            else
                count2++;
        }
        int k=0;
        int i=0;
        for(i=0;i<count0;i++){
            nums[k++]=0;
        }
        for(i=0;i<count1;i++){
            nums[k++]=1;}
        for(i=0;i<count2;i++){
            nums[k++]=2;}
    }
};