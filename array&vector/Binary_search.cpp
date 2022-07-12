#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[]={4,3,5,2,1},n=5,k=2;
	int lb=0,ub=n-1,mid;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	while(lb<=ub){
		mid=(lb+ub)/2;
		if(a[mid]==k){
			cout<<"Element found at index= "<<mid<<endl;
			break;
		}
		else if(k<a[mid]){
			ub=mid-1;
		}
		else
			lb=mid+1;
	}
	if(lb>ub){
		cout<<"Element not found!"<<endl;
	}
	
	return 0;
}
