#include<iostream>
#include<vector>
using namespace std;

bool outOfOrder(vector<int> arr, int i){
	int x = arr[i];
	if(i==0){
		return x>arr[i+1];
	}
	if(i==arr.size()-1){
		return x<arr[i-1];
	}
	return (x>arr[i+1] || x<arr[i-1]);
}

pair<int,int> subarray_sort(vector<int> arr){
	int largest=INT_MIN;
	int smallest=INT_MAX;
	int n = arr.size();
	for(int i=0;i<n;i++){
		int x = arr[i];
		if(outOfOrder(arr,i)){
			smallest = min(smallest,x);
			largest = max(largest,x);
		}
	}
	if(smallest==INT_MAX){
		return {-1,-1};
	}
	
	int left=0,right=n-1;
	while(arr[left]<smallest){
		left++;
	}
	while(arr[right]>largest){
		right--;
	}
	return {left,right};
}


int main(){
	vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
	auto result = subarray_sort(arr);
	cout<<result.first<<","<<result.second<<endl;
	return 0;
}