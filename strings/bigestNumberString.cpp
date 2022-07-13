#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int no_digit(int n){
	return floor(log10(n)+1);
}

bool comparator(int a,int b){
	if(no_digit(a)==no_digit(b)){
		return a>b;
	}
	else{
		string s1 = to_string(a)+to_string(b);
		string s2 = to_string(b)+to_string(a);
		return s1>s2;
	}
}

string concatenate(vector<int> numbers){
    string str = "";
    sort(numbers.begin(),numbers.end(),comparator);
    for(int x : numbers){
    	str+= to_string(x);
	}
    return str;
}

int main(){
	vector<int> v = {10,11,20,30,3};//3 30 20 11 10
	cout<<concatenate(v)<<endl;
	return 0;
}