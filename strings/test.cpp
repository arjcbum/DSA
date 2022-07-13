#include<iostream>
#include<string>
using namespace std;

int main(){
	string str="abcde";
	str[2]='f';
	cout<<str<<endl;
	cout<<("a"<"z")<<endl;
	string s=str;
	str[2]='c';
	cout<<s<<endl;
	return 0;
}