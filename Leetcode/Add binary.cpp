class Solution {
public:
    string addBinary(string a, string b) {
        string ans ="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int c =0, sum=0;
        int i=0,j=0;
        while(i < a.size() && j < b.size()){
            sum = c + (a[i]-'0')+ (b[j]-'0');
            if( sum ==2){
                c=1;
                sum = 0;
            }else if(sum == 3){
                c = 1;
                sum = 1;
            }else
               c=0;
            ans += to_string(sum);
            i++;
            j++;
                
        }
        while(i < a.size()){
            sum = c + (a[i]-'0');
            i++;
            if( sum ==2){
                c=1;
                sum = 0;
            }else if(sum == 3){
                c = 1;
                sum = 1;
            }else
               c=0;
            ans += to_string(sum);
        }
   
    
        while(j < b.size()){
            sum = c + (b[j]-'0');
            j++;
            if( sum ==2){
                c=1;
                sum = 0;
            }else if(sum == 3){
                c = 1;
                sum = 1;
            }else
               c=0;
            ans += to_string(sum);
        }
        if(c)
            ans +=to_string(c);
        reverse(ans.begin(),ans.end());
               return ans;
    }
};