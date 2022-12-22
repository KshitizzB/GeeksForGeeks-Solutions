class Solution{
    public:
    int maxIndexDiff(int A[], int N) { 
        int rm[N], r=INT_MIN, i=0, j=0;
        rm[N-1] = A[N-1];
        for(int i=N-2; i>=0; i--) rm[i] = max(rm[i+1], A[i]);
        while(i<N && j<N){
            if(rm[j]>=A[i]){
                r = max(r, j-i);
                j++;
            }
            else i++;
        }
        return r;
    }
};