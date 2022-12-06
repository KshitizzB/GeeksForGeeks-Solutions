class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>x;
	    vector<int> y;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0) x.push_back(arr[i]);
	        else y.push_back(arr[i]);
	    }
	    int a=x.size(), b=y.size(), c=(a>b)?b:a, p=0;
	    for(int i=0; i<c; i++){
	        arr[p] = x[i];
	        p += 2;
	    }
	    p = 1;
	    for(int i=0; i<c; i++){
	        arr[p] = y[i];
	        p += 2;
	    }
	    if(a>b){
	        c = 2*b;
	        for(int i=b; i<a; i++) arr[c++] = x[i];
	    }
	    else if(b>a){
	        c = 2*a;
	        for(int i=a; i<b; i++) arr[c++] = y[i];
	    }
	}
};