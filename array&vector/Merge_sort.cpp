#include<iostream>
using namespace std;


void merge(int a[], int l,int mid, int h){
	int low=l;
	int j=mid+1;
	int i=l,b[h+1];
	while(i<=mid && j<=h){
		if(a[i]<=a[j]){
			b[low++]=a[i++];
		}
		else{
			b[low++]=a[j++];
		}
	}
	if(low<=h){
		while(i<=mid){
			b[low++]=a[i++];
		}
		while(j<=h){
			b[low++]=a[j++];
		}
	}
	for(int i=l;i<=h;i++){
		a[i]=b[i];
	}
}


void merge_sort(int a[], int l, int h){
	if(h>l){
		int mid=(l+h)/2;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

int main(){
	
	int a[]={4,3,5,2,8,1,7,6};
	int n = *(&a + 1) - a;
	merge_sort(a,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
