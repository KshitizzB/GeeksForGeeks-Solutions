class Solution{
    public:
    int circularSubarraySum(int arr[], int num){
        int s=0, p=INT_MAX, q=INT_MIN, x=0, y=0;
        for(int i=0; i<num; i++) s += arr[i];
        for(int i=0; i<num; i++){
            y += arr[i];
            x += arr[i];
            p = min(p, x);
            q = max(q, y);
            if(y<0) y = 0;
            if(x>0) x = 0;
        }
        if(s!=p) s = s-p<s?s:s-p;
        return s>q?s:q;
    }
};