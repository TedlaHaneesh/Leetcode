class Solution {
public:
    int reverse(int x) {
       int o=0,n;
        while(x!=0){
        if (o > INT_MAX / 10 || o < INT_MIN / 10) {
                return 0; // Return 0 to indicate overflow or underflow
            }
        n=x%10;
        o=o*10+n;
        x=x/10;
        }
       return o;
    }
};