#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int Sum){
	unordered_set<int> set;
	for(int s: arr){
		int x = Sum - s;
		if(set.find(x)!=set.end()){
			return {s,x};
		}
		set.insert(s);
	}
	return {0,0};
} 

int main(){
	
	vector<int> arr = {10,5,2,3,-6,9,11};
	int sum = 4;
	auto elements = pairSum(arr,sum);
	cout<<elements[0]<<","<<elements[1]<<endl;

	return 0;
}