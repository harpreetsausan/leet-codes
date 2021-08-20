class Solution {
public:
    int reverse(int x) {
        long int d,res=0;
        while(x!=0){
            d=x%10;
            res=res*10+d;
            x=x/10;
        }
        if(res>INT_MAX || res<INT_MIN){
            return 0;
        }
        
            return res;
    }
};