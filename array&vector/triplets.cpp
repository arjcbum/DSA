#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> arr,int Sum){
	sort(arr.begin(),arr.end());
	vector<vector<int>> result;
	for(int i=0;i<arr.size()-2;i++){
		int j=i+1;
		int k=arr.size()-1;
		while(j<k){
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];
			if(current_sum==Sum){
				result.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if(current_sum>Sum){
				
				k--;
			}
			else{
				j++;
			}
		}	
	}
	return result;
} 


int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
	int Sum = 18;
	auto elements = triplet(arr,Sum);
	for(auto x : elements){
		for(auto s: x){
			cout<<s<<",";
		}
		cout<<endl;
	}
	return 0;
}