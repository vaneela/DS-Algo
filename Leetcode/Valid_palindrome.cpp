class Solution {
public:
    bool palindrome(string &str){
        int i=0, j=str.size()-1;
        bool ans =1;
        while(i<j){
            if(str[i++]==str[j--])
                ans=1;
            else{
                ans=0;
                break;
            } 
          }
        return ans;
    }
    bool isPalindrome(string s) {
        // 65-90 97- 122 48-57
        string str="";
        for(char i : s){
            if(i>=65 && i<=90){
                str+=tolower(i);
            }else if((i>=97 && i<=122 ) || (i>=48 && i<=57) )
                str+=i;

        }
        return palindrome(str);
        
    }
};