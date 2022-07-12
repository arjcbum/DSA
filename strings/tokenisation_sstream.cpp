#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){

	string input;
	getline(cin,input);
	
	stringstream ss(input);
	string token;
	vector<string> tokens;
	while(getline(ss,token,' ')){
		tokens.push_back(token);
	}
	for(auto token: tokens){
		cout<<token<<endl;
	}
	return 0;
}