#include<iostream>
#include<string>
using namespace std;

string compressString(const string &str){   
    //complete the function to return output string
    int ch[123]={0};
    string s="";
  	for(int i=0;i<str.length();i++){
  		ch[(str[i]-'0')]++;	
	}
    for(int i=0;i<str.length();){
    	s+=str[i];
    	string s2 = to_string(ch[str[i]-'0']);
    	if(s2.length()!=0){
    		s+=s2;
    		i=i+ch[str[i]-'0'];
		}
    	else{
    		i++;
		}
	}
	if(str.length()>s.length())
		return s;
	return str;
}

int main(){
	const string str = "bbbaaaadexxxxxx";
	cout<<compressString(str)<<endl;
	return 0;
}