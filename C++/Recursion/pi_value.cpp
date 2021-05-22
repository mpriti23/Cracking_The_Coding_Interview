// string = "pipppippiiipi"
// replace pi with 3.14
// output will be (3.14pp3.14p3.14ii3.14)

// pippii
// pi(ppii)
// p(pii)
// pi(i)
// i
// ""

#include<bits/stdc++.h>
using namespace std;

void pi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        string ros=s.substr(2);
        pi(ros);
        
    }else{
        cout<<s[0];
        string ros=s.substr(1);
        pi(ros);

    }
}

int main(){
    string s="pipppippiiipi";
    pi(s);
    return 0;
}

// works perfectly fine
