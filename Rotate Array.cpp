class Solution{
    public:
    
    void reverse(int a[], int x, int y){
        for(int i=x; i<y; i++){
            int t = a[i];
            a[i] = a[y];
            a[y] = t;
            y--;
        }
    }
    
    void rotateArr(int arr[], int d, int n){
        d %= n;
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
    }
};