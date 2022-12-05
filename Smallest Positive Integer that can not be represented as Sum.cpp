class Solution{   
public:
    long long smallestpositive(vector<long long> array, int n){ 
        long long int r = 1;
        sort(array.begin(), array.end());
        for(int i=0; i<n && array[i]<=r; i++) r += array[i];
        return r;
    }
};