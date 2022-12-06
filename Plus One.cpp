class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        reverse(arr.begin(), arr.end());
        int i=0, c;
        do{
            int x = arr[i]+1;
            arr[i++] = x%10;
            c = x/10;
        }
        while(c==1 && i<N);
        if(c==1) arr.push_back(1);
        reverse(arr.begin(), arr.end());
        return arr;
    }
};