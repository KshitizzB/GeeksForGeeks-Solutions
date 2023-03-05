class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k){
        int l=0, h=N-1;
        while(l<=h){
            int m = (l+h)/2;
            if(Arr[m]==k) return m;
            else if(Arr[m]>k) h--;
            else l++;
        }
        return l;
    }
};