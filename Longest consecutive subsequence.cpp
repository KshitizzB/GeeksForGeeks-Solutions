class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N){
        int c=1, r=1, t=-1;
        map<int, int> m;
        for(int i=0; i<N; i++) m[arr[i]] = 1;
        for(auto i: m){
            if(t==-1) t = i.first;
            else if(i.first==t+1){
                c += 1;
                t = i.first;
                r = max(r, c);
            }
            else{
                r = max(r, c);
                t = i.first;
                c = 1;
            }
        }
        return r;
    }
};