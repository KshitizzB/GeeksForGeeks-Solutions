class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P){ 
        map<int, int> m;
        for(int i=0; i<N; i++){
            if(arr[i]>=1 && arr[i]<=N) m[arr[i]] += 1;
        }
        for(int i=0; i<N; i++) arr[i] = m[i+1];
    }
};