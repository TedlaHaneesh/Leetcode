class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0){
        return 0;
      }  
      long temp=x,p=0;
      while(temp!=0){
        p=p*10+(temp%10);
        temp/=10;
      }
      if(p==x){
        return 1;
      }
      return 0;
    }
};