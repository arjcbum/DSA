#include<iostream>
#include<vector>
using namespace std;

pair<int,int> miniDifference(vector<int> a,vector<int> b){
	int n1 = a.size();
	int n2 = b.size();
	int minDif=INT_MAX;
	int dif,p,q;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			dif=abs(a[i]-b[j]);
			if(dif<minDif){
				p=a[i];
				q=b[j];
				minDif=dif;
				if(minDif==0)
					return {p,q};
			}
		}
	}
	return {p,q};
	
/*	 // Write your code here.
	sort(a2.begin(),a2.end());
	vector<int> result;
	//iterate over 1 and do binary search
	int p1,p2;
	
	int diff = INT_MAX;
	
	for(int x : a1){
			auto lb = lower_bound(a2.begin(),a2.end(),x) - a2.begin();

			if(lb>=1 and x - a2[lb-1] < diff){
					diff = x - a2[lb-1];
				  p2 = a2[lb-1];
				  p1 = x;
			}

		 if(lb!=a2.size() and a2[lb]-x < diff ){
			 		diff = a2[lb] - x;
			 		p1 = x;
			 		p2 = a2[lb];
		 }
	}
	
  return {p1,p2};
  */
}

int main(){
	vector<int> a={23,5,10,17,30};
	vector<int> b={26,134,135,14,19};
	auto result = miniDifference(a,b);
	cout<<result.first<<","<<result.second<<endl;
	return 0;
}