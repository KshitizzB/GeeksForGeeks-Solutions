class Solution{
	public:
    	long long findNth(long long N){
        long long r=0, x=0;
        while(N){
            r += (N%9)*pow(10, x++);
            N /= 9;
        }
        return r;
    }
};