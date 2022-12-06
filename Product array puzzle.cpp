class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> v;
        for(int i=0; i<n; i++) v.push_back(1);
        long long int t = 1;
        for(int i=0; i<n; i++){
            v[i] *= t;
            t *= nums[i];
        }
        t = 1;
        for(int i=n-1; i>=0; i--){
            v[i] *= t;
            t *= nums[i];
        }
        return v;
    }
};