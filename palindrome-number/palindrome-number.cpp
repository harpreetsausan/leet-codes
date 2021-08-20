class Solution {
public:
    bool isPalindrome(int x) {
        long int res=0;
            int d=0;
        int tmp=x;
        while(x>0){
            d=x%10;
            res=res*10+d;
            x/=10;
        }
        if(res==tmp &&-pow(2,31) <= x && x<= pow(2,31 - 1)){
            return true;
        }
        else 
            return false;
    }
};