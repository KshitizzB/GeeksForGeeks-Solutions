class Solution {
  public:
    int maxValue(int arr[], int N) {
        int p=INT_MIN, q=INT_MAX, r=INT_MIN, s=INT_MAX;
        for(int i=0; i<N; i++){
            p = max(p, arr[i]+i);
            q = min(q, arr[i]+i);
            r = max(r, arr[i]-i);
            s = min(s, arr[i]-i);
        }
        return max(p-q, r-s);
    }
};