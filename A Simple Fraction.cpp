class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    string r = "";
	    if(numerator==0) r = "0";
	    else{
	        int s = (numerator<0)^(denominator<0)?-1:1;
	        if(s==-1) r = "-";
	        r += to_string(numerator/denominator);
	        int rm = numerator%denominator;
	        if(rm!=0){
	            r += ".";
	            int i, t=0;
	            map<int, int> m;
	            while(rm>0 && t==0){
	                if(m.find(rm)!=m.end()){
	                    i = m[rm];
	                    t = 1;
	                    break;
	                }
	                m[rm] = r.size();
	                rm *= 10;
	                r += to_string(rm/denominator);
	                rm %= denominator;
	            }
	            if(t){
	                r.insert(i, "(");
	                r += ")";
	            }
	        }
	    }
	    return r;
	}
};