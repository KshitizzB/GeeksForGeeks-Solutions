class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int r=INT_MIN, n=arr.size(), d=INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            int j=0, k=n-1;
            while(j<k){
                if(j==i) j += 1;
                else if(k==i) k -= 1;
                else{
                    int s=arr[i]+arr[j]+arr[k], x=abs(target-s);
                    if(x<=d){
                        if(x==0) return s;
                        if(x==d) r = max(r, s);
                        else{
                            d = x;
                            r = s;
                        }
                    }
                    if(s==target) return r;
                    else if(s>target) k--;
                    else j++;
                }
            }
        }
        return r;
    }
};
