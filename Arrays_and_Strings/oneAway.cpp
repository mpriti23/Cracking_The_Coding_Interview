#include<bits/stdc++.h>
using namespace std;

bool isOneAway(string s1,string s2){
    string a,b;
    a=s1.length()>=s2.length()?s1:s2;
    b=s1.length()<s2.length()?s1:s2;

    int l1=a.length(),l2=b.length();
    if(l1-l2 >1){
        return false;
    }
    bool flag=false;
    for(int i=0,j=0;i<l1 && j<l2;){
        if(a[i]!=b[i]){
            if(flag){
                return false;
            }
            flag=true;
            if(l1==l2){
                i++;
                j++;
            }else{
                i++;
            }
        }else{
            i++;
            j++;
        }
    }
    return true;
}

int main(){
    string s1="abc",s2="adce";
    if(isOneAway(s1,s2)){
        cout<<"Yes\n";
    }else{
        cout<<"NO\n";
    }
}