class Solution{
    public:
        int trailingZeroes(int N){
            int r = 0;
            for(int i=5; N/i>0; i*=5) r += N/i;
            return r;
        }
};