class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        long long d = *max_element(a.begin(), a.end())+1;
        vector<long long> r, dp(d, 1);
        for(long long i=1; i<d; i++) dp[i] = (dp[i-1]*i)%1000000007;
        for(int i=0; i<n; i++) r.push_back(dp[a[i]]);
        return r;
    }
};