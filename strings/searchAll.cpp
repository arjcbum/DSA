#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int index = big.find(small);
    if(index==-1)
    	return result;
    while(index!=-1){
    	result.push_back(index);
    	index = big.find(small,index+1);
	}
	return result;
}

int main(){
	string big = "I liked the movie, acting in movie was great!";
	string small = "movie";
	vector<int> result = stringSearch(big,small);
	for(int x: result){
		cout<<x<<", ";
	}
	cout<<endl;
	return 0;
}