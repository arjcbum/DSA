#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int busyLife(vector<pair<int,int>> act){
	sort(act.begin(),act.end());
	int largest=0,q,cnt=0;
	for(int i=0;i<act.size();i++){
		q=act[i].second;
		cnt=1;
		for(int j=i+1;j<act.size();j++){
			if(act[j].first>=q){
				cnt++;
				q=act[j].second;
			}
		}
		largest=max(largest,cnt);
		
	}
	return largest;
}

int main(){
	vector<pair<int,int>> activities={{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};
	cout<<busyLife(activities)<<endl;
	return 0;
}