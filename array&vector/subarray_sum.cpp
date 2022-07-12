#include<iostream>
#include<vector>
using namespace std;

int maxSubArraySum(vector<int> arr){
	int n=arr.size();
	int i=0,k=n-1,largest=INT_MIN,sum=0,p,q;
	while(i<=k){
		sum+=arr[i];
		largest=max(largest,sum);
		if(sum<0)
			sum=0;
		i++;
	}
	return largest;
}

int main(){
	vector<int> arr={-1,2,3,4,-2,6,-8,3};
	cout<<maxSubArraySum(arr)<<endl;
	return 0;
}