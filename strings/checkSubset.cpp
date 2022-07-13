#include<iostream>
using namespace std;

bool checkSubset(string str1,string str2){
	int i=str1.length();
	int j=str2.length();
	
	while(i>=0 and j>=0){
		if(str1[i]==str2[j]){
			j--;
			i--;
		}
		else{
			i--;
		}
	}
	if(j==-1)
		return true;
	
	return false;
}

int main(){
	string str1,str2;
	cin>>str1>>str2;
	cout<<checkSubset(str1,str2)<<endl;
	return 0;
}