//string rotation 

#include <iostream>
#include <string>
using namespace std;

bool isRotation( string s1, string s2 ) {
	size_t len1 = s1.length();
	size_t len2 = s2.length();
	if ( len1 == 0 || len1 != len2 ) {
		return false;
	}
	string concatS1 = s1 + s1;
	if ( concatS1.find(s2) != string::npos ) {
		return true;
	} else {
		return false;
	}
}

int main() {
	string s1="abcde", s2="bcdea";
	
	if ( isRotation(s1, s2) ) {
		cout << "Yes " << s2 << " is rotation of " << s1 << endl;
	} else {
		cout << "No " << s2 << " is not a rotation of " << s1 << endl;
	}
	return 0;
}
