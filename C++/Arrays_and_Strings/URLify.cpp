//add '%20' at every space 

#include<bits/stdc++.h>
using namespace std;

void func(string s1,int l){
    int space=0,i=0,j=0;
    for(int i=0;i<l;i++){
        if(s1[i]==' '){
            space++;
        }
    }
    int len=l+ (2*space);
    i=len-1;
    for(j=l-1;j>=0;--j){
        if(s1[j]!=' '){
            s1[i--]=s1[j];
        }
        else{
            s1[i--]='0';
            s1[i--]='2';
            s1[i--]='%';
        }
    }
    for(int i=0;i<len;i++){
        cout<<s1[i];
    }
    
}

int main(){
    string s1="I Love You";
    func(s1,s1.length());
    
    return 0;
}