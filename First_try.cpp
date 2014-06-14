class Solution {
public:
        double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int x = m+n;
        int C[x];
        for(int i = 0; i<m; i++){
            C[i]=A[i];
        }
        for(int i = 0; i<n; i++){
            C[m+i]=B[i];
        }
        sort(C,C+x);
        
        if(x%2==1){
            return double(C[x/2]);
        }
        else
            return double(C[x/2]+C[x/2-1])/2;
        }
};
