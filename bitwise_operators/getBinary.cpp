#include<iostream>
#include<math.h>
using namespace std;

int getBinary(int n){
	int bin = 0;
	int bit=0;
	while(n>0){
		int r = n%2;
		bin+=r*pow(10,bit);
		bit++;
		n=n/2;
	}
	return bin;
}

int main(){
	int decimal = 6;
	cout<<getBinary(decimal)<<endl;
	return 0;
}