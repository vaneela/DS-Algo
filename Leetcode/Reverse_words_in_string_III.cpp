class Solution {
public:
    void revstr(string & str,int s,int e){
        int i=s,j=e;
        while(i<j)
            swap(str[i++],str[j--]);
    }
    string reverseWords(string str) {
        int s=0,e=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==' '){
                e=i-1;
                revstr(str,s, e);
                s=e+2;
            }else if( i==(str.size()-1)){
                e=i;
                revstr(str,s, e);
            }
        }
        return str;
    }
};