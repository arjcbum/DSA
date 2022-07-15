#include<iostream>
using namespace std;

void clearLastIthBit(int &n,int i){
	int mask = (-1<<i);
	n = n&mask;
}

int main(){
	
	int i,n=15;
	cin>>i;
	clearLastIthBit(n,i);
	cout<<n<<endl;
	return 0;
}