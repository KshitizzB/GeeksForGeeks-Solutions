class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int r=0, s=(n*(n+1))/2;
        for(int i=0; i<n; i++) r += array[i];
        return s-r;
    }
};