class Solution{

    public:
    long long trappingWater(int arr[], int n){
        long long r = 0;
        int i=0, j=n-1, x=arr[0], y=arr[n-1];
        while(i<j){
            if(x<=y){
                i++;
                x = max(x, arr[i]);
                r += x-arr[i];
            }
            else{
                j--;
                y = max(y, arr[j]);
                r += y-arr[j];
            }
        }
        return r;
    }
};