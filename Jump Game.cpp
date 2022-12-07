class Solution {
  public:
    int canReach(int A[], int N) {
        int x=N-2, y=x+1;
        while(x>=0){
            if(x+A[x]>=y) y=x;
            x--;
        }
        if(y==0) return 1;
        return 0;
    }
};