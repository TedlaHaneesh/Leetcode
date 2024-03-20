class Solution {
public:
    bool isPalindrome(int x) {
        long temp=x;
        long sum=0;
        if(x==0){
            return 1;
        }
        if(x>0){
        while(temp){
           int digit=temp%10;
           sum=sum*10+digit;
           temp=temp/10;
        }
        }
        else{
            return 0;
        }
        if(sum==x){
            return 1;
        }
        else{
            return 0;
        }
    }
};