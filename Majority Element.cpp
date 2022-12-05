class Solution{
  public:
    int majorityElement(int a[], int size){
        int n = size/2;
        map<int, int> m;
        for(int i=0; i<size; i++) m[a[i]] += 1;
        for(auto i: m) if(i.second>n) return i.first;
        return -1;
    }
};