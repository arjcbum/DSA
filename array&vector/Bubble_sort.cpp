#include<iostream>
using namespace std;

int main(){
	int a[]={1,2,3,4,5,6},n=6,temp,f=1,count=0;
	
	for(int i=0;i<n-1 && f==1;i++){
		f=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				f=1;				
			}
			count++;
			cout<<i<<","<<j<<endl;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<count<<endl;
	return 0;
}
