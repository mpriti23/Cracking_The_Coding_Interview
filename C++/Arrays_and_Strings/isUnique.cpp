//Question 1: IsUnique - Given a string. Find if all the characters of string are unique;

#include<bits/stdc++.h>
using namespace std;

//no data structure used
//Time complexity-O(N2)
bool isUnique(string word){
    int n=word.length();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(word[i]==word[j]){
                return false;
            }
        }
    }
    return true;
}


int main(){
    vector<string>v={"abcde","apple","hello"};
    for(auto x:v){
        cout<<x<<" : "<<isUnique(x)<<"\n";
    }
}
