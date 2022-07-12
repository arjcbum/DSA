#include<iostream>
using namespace std;

int main(){
	int a[]={9,8,7,5,6},n=5,p_min,temp;
	for(int i=0;i<n-1;i++){
		p_min=i;
		for(int j=i+1;j<n;j++){
			if(a[p_min]>a[j]){
				p_min=j;
			}
		}
		temp=a[i];
		a[i]=a[p_min];
		a[p_min]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
