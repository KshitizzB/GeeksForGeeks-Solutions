class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> v;
        int x=0, y=x+1;
        while(y<n){
            while(A[y]>A[y-1] && y<n) y++;
            if(y>x+1){
                vector<int> t;
                t.push_back(x);
                t.push_back(y-1);
                v.push_back(t);
            }
            x = y;
            y += 1;
        }
        return v;
    }
};