class Solution {
public:
    int canmakembouquet(vector<int>& bloomDay,int mid, int m, int k){
        int bouquetcount=0;
        int consecutiveflowers=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                consecutiveflowers++;
            }
            else{
                consecutiveflowers=0;
            }
            if(consecutiveflowers==k){
                bouquetcount++;
                consecutiveflowers=0;
            }
        }
        return bouquetcount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start=0;
        int end=*max_element(bloomDay.begin(),bloomDay.end());
        int mindays=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canmakembouquet(bloomDay,mid,m,k)>=m){
                mindays=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return mindays;
    }
};