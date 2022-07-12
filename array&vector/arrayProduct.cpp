#include<iostream>
#include<vector>
using namespace std;

vector<int> arrayProduct(vector<int> a){
	vector<int> result;
	int p;
	for(int i=0;i<a.size();i++){
		p=1;
		for(int j=0;j<a.size();j++){
			if(i!=j){
				p*=a[j];
			}
		}
		result.push_back(p);
	}
	return result;
	
	/*
	int n = arr.size();
      // Base case
    if (n == 1) {
        return {0};
    }
 
    int i, temp = 1;
 
    vector<int> prod(n,1);
   //  In this loop, temp variable contains product of
   //    elements on left side excluding arr[i] 
    for (i = 0; i < n; i++) {
        prod[i] = temp;
        temp *= arr[i];
    }
 
    //Initialize temp to 1
    //for product on right side 
    temp = 1;
 
  //   In this loop, temp variable contains product of
  //     elements on right side excluding arr[i] 
    for (i = n - 1; i >= 0; i--) {
        prod[i] *= temp;
        temp *= arr[i];
    }
    return prod;
	*/
}

int main(){
	vector<int> a = {1,2,3,4,5};
	auto result = arrayProduct(a);
	for(int x: result)
		cout<<x<<",";
	cout<<endl;
	return 0;
}