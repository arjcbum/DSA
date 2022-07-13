#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


string normalize(const string &sentence) {
    string copy = sentence;
    //vector<string> v;
    //Make the changes in copy, and return it
    //transform(copy.begin(),copy.end(),copy.begin(),::tolower);
	copy[0]= toupper(copy[0]);	
   	for(int i=0;i<copy.length()-1;i++){
   		if(copy[i]==' '){
   			copy[i+1]= toupper(copy[i+1]);
		}
		else{
			copy[i+1]= tolower(copy[i+1]);
		}
	}
   	
    return copy;
}

int main(){
	string sentence="This is SO MUCH FUN!";
	cout<<normalize(sentence)<<endl;
	return 0;
}