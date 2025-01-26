class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                n+=tolower(s[i]);
            }
        }
        int left=0,right=n.size()-1;
        while(left<right){
            if(n[left]!=n[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};