#include<iostream>
#include<string>
using namespace std;

string convert_to_digital_time(int minutes){
	string str ="";
	string hh = to_string(minutes/60);
	string mm = to_string(minutes%60);
	if(mm.length()==1){
		str=hh+":0"+mm;
	}
	else{
		str=hh+":"+mm;	
	}
	return str;
}

int main(){
	int minutes;
	cin>>minutes;
	cout<<convert_to_digital_time(minutes)<<endl;
	return 0;
}