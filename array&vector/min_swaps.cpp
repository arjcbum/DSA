#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int min_swap(vector<int> arr){
	int n = arr.size(),cnt=0;
	pair<int,int> ap[n];
	
	for(int i=0;i<n;i++){
		ap[i].first=arr[i];
		ap[i].second=i;
	}
	
	sort(ap,ap+n);
	vector<bool> visited(n,false);
	for(int i=0;i<n;i++){
		int old_index = ap[i].second;
		if(visited[i]==true || i==old_index)
			continue;
		int node=i;
		int cycle=0;
		while(!visited[node]){
			cycle++;
			visited[node]=true;
			node = ap[node].second;
		}
		cnt += cycle-1;		
	}
	return cnt;
}

int main(){
	
	vector<int> arr = {5,4,3,2,1};
	cout<<min_swap(arr)<<endl;
	return 0;
}
