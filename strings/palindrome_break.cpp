#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkPalindrome(string str){
	int n=str.length();
	int i=0,j=n-1,f=0;
	while(i<j){
		if(str[i]==str[j]){
			j--;
			i++;
		}
		else{
			f=1;
			break;
		}
	}
	if(f==1)
		return false;
	else
		return true;
}

string breakPalindrome(string palindrome) {
    int n = palindrome.length();
    string str=palindrome;
    if(n==1)
    	return "";
    for(int i=0;i<n/2;i++){
    	if(str[i]>'a'){
    		str[i]='a';
    		break;
		}
	}
	if(!checkPalindrome(str)){
		return str;
	}
	palindrome[n-1]=(palindrome[n-1]+1);
	return palindrome;
}


int main(){
	string str;
	cin>>str;
	cout<<breakPalindrome(str)<<endl;
	return 0;
}