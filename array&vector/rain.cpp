#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int rain(vector<int> heights){
	
	int n = heights.size();
	if(n<=2)
		return 0;
	
	vector<int> a(n,0),b(n,0);		
	a[0]=heights[0];
	b[n-1]=heights[n-1];
	for(int i=1;i<n;i++){
		a[i]=max(a[i-1],heights[i]);
		b[n-i-1]=max(b[n-i],heights[n-i-1]);
	}	
	int total=0;
	for(int i=0;i<n;i++){
		total += min(a[i],b[i]) - heights[i];
	}
	return total;
}

int main(){
	
	vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
	int result = rain(arr);
	cout<<result<<endl;
	return 0;
}