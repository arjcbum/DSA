#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int mountain(vector<int> a){
	int n = a.size();
	if(n==2)
		return 0;
	int largest=0;
	for(int i=1;i<n-1;){
		int cnt=1,j=i;
		if(a[i]>a[i-1] && a[i]>a[i+1]){
			while(i<n && a[i]>a[i+1]){
				cnt++;
				i++;	
			}
			while(j>0 && a[j]>a[j-1]){
				cnt++;
				j--;
			}	
			largest=max(largest,cnt);
		}
		else
			i++;
	}	
	return largest;
}

int main(){
	vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	cout<<mountain(arr)<<endl;
	return 0;
}