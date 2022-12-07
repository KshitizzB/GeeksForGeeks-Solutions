class Solution{
public:
    int findZeroes(int arr[], int n, int m) {
        int x=0, y=0, c=0, r=0;
        while(y<n){
            if(c<=m){
                if(arr[y]==0) c++;
                y++;
            }
            if(c>m){
                if(arr[x]==0) c--;
                x++;
            }
            if(c<=m) r = max(r, y-x);
        }
        return r;
    }  
};