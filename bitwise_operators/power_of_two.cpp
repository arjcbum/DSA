#include<iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	if(x&(x-1)==0){
		cout<<"Power of two"<<endl;
	}
	else{
		cout<<"not a power of two"<<endl;
	}
	return 0;
}