#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void sortSubSequence(string str,string o,vector<string> &v){
	if(str.size()==0){
		v.push_back(o);
		return;
	}
	
	char ch = str[0];
	
	sortSubSequence(str.substr(1),o+ch,v);
	
	sortSubSequence(str.substr(1),o,v);
}

bool comparator(string s1, string s2){
	if(s1.length()==s2.length()){
		return s1 < s2;
	}
	return s1.length() < s2.length();
}

int main(){
	string str;
	string output = "";
	vector<string> v;
	getline(cin,str);
	sortSubSequence(str,output,v);
	sort(v.begin(),v.end(),comparator);
	for(auto vec: v){
		cout<<vec<<",";
	}
	cout<<endl;
	return 0;
}