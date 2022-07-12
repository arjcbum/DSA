#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h){
	int n = l+rand()%(h-l+1);
	int temp;
	temp=a[n];
	a[n]=a[l];
	a[l]=temp;
	int pivot=a[l];
	int j=l;
	for(int i=l+1;i<=h;i++){
		if(a[i]<=pivot){
			j++;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp=a[j];
	a[j]=a[l];
	a[l]=temp;
	
	return j;
}

void quick_sort(int a[], int l, int h){
	if(h>l){
		int j;
		j = partition(a,l,h);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,h);
	}
}

int main(){
	
	int a[]={7,10,4,3,20,15};
	//int a[]={10,7};
	int n = *(&a + 1) - a;
	quick_sort(a,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
