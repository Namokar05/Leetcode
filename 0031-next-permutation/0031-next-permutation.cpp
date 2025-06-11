class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size();
        int pivot=-1;
    
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=i;
                break;
                }
        }
        if(pivot==-1){
            reverse(A.begin(),A.end());
            return;
        }
        for(int i=n-1;i>pivot;i--){
            if(A[i]>A[pivot]){
            swap(A[pivot],A[i]);
            break;
            }
        }
        int i=pivot+1,j=n-1;
        while(i<=j){
        swap(A[j],A[i]);
        i++,j--;
        }
        
        
    }
};