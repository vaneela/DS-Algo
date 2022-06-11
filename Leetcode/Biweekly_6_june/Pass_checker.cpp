#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool strongPasswordCheckerII(string pas) {
        for(int i=0;i<pas.size()-1;i++){
            if(pas[i]==pas[i+1])
                    return false;
        }
        int u=0,l=0,d=0,s=0;
        for(int i=0;i<pas.size();i++){
            if(pas[i]>=65 && pas[i]<=90)
                u+=1;
            else if(pas[i]>=48 && pas[i]<=57)
                d+=1;
            else if(pas[i]>=97 && pas[i]<=122)
                l+=1;
            else if(pas[i]>=35 && pas[i]<=38 || pas[i]>=40 && pas[i]<=43 ||pas[i] == 94 || pas[i] == 33 || pas[i] == 64 ||pas[i] == 45||pas[i] == 43)
                s+=1;
            
        }
        if(l&& u && d && s && pas.size()>=8)
            return true;
        return false;
    }
