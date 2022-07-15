#include<iostream>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
	int a = (~0)<<(j+1);//-16
	int b = (1<<i)-1;//1
	int mask = a|b;
	n = n&mask;
}

int main(){
	int n=15;//1111
	int i=2;
	int j=3;
	//int m=2;
	clearBitsInRange(n,i,j);
	cout<<n<<endl;
	return 0;
}
