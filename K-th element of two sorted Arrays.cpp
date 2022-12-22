class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k){
        int x=0, y=0, r;
        while(k-- && x<n && y<m){
            if(arr1[x]<=arr2[y]){
                r = arr1[x];
                x += 1;
            }
            else{
                r = arr2[y];
                y += 1;
            }
        }
        if(k>=0){
            if(x<n) r = arr1[x+k];
            else r = arr2[y+k];
        }
        return r;
    }
};