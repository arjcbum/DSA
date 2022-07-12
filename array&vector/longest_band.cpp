#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largestBand(vector<int> arr){
	unordered_set<int> set;
	for(int x: arr){
		set.insert(x);
	}
	int n = arr.size(),largest=1;
	for(int i: arr){
		if(set.find(i-1)==set.end()){
			int cnt=1,j=i+1;
			while(set.find(j)!=set.end()){
				cnt++;
				j++;
			}
			largest=max(largest,cnt);
		}
	}
	return largest;
}

int main(){
	
	vector<int> arr = {1,9,3,0,18,5,2,4,10,7,12,6};
	int result = largestBand(arr);
	cout<<result<<endl;
	return 0;
}