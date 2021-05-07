#include<bits/stdc++.h>
using namespace std;

bool check_permutation(string s1,string s2){
    int l1=s1.length(),l2=s2.length();
    if(l1!=l2){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<l1;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1="abcde",s2="acbde";
    if(check_permutation(s1,s2)){
        cout<<s1+" and "+s2+" are permutation of each other\n";
    }else{
        cout<<s1+" and "+s2+" are not a permutation of each other\n";
    }
     s1="abce";
     s2="acbde";
    if(check_permutation(s1,s2)){
        cout<<s1+" and "+s2+" are permutation of each other\n";
    }else{
        cout<<s1+" and "+s2+" are not a permutation of each other\n";
    }
}
