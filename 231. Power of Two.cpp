class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 ) return true;
        else if (n==0) return false;
        else{
        while(n!=1){
            if(n%2!=0) {
                return false;
                break; 
                
            }
            else n=n/2;
        }

        return true;
        }
    }
};