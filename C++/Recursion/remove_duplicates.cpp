// aaabbccddee
// output shoud be abcde

// a(abbccddee)
// abbccddee
// 
// 
// 
// 
// e
// ""

#include<bits/stdc++.h>
using namespace std;

string duplicates(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ros = duplicates(s.substr(1));
    if(ch==ros[0]){
        return ros;
    }
    return (ch+ros);

}

int main(){
    string s="aaabbccddeee";
    cout<<duplicates(s);
    return 0;
}

// works perfectly fine