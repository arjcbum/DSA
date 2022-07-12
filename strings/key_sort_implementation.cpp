#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string extractTokenAtKey(string str,int key){
	char *token = strtok((char *)str.c_str()," ");
	while(key>1){
		token = strtok(NULL," ");
		key--;
	}
	return (string)token;
}

int numeric(string str){
	int ans=0,p=1;
	int n = str.length();
	for(int i=n-1;i>=0;i--){
		ans+= (str[i]-'0')*p;
		p*=10;
	}
	return ans;
}

bool numericComparison(pair<string,string> s1,pair<string,string> s2){
	string k1,k2;
	k1=s1.second;
	k2=s2.second;
	
	return numeric(k1) < numeric(k2);
}

bool lexographicComparison(pair<string,string> s1,pair<string,string> s2){
	string k1,k2;
	k1=s1.second;
	k2=s2.second;
	
	return k1 < k2;
}


int main(){
	
	int n,key;
	cin>>n;
	cin.get();
	string str,reversal,conversion;
	vector<string> str_list;
	for(int i=0;i<n;i++){
		getline(cin,str);
		str_list.push_back(str);
	}
	cin>>key>>reversal>>conversion;
	
	vector<pair<string,string>> str_pair;
	
	for(int i=0;i<n;i++){
		str_pair.push_back({str_list[i],extractTokenAtKey(str_list[i],key)});
	}
	
	if(conversion=="numeric"){
		sort(str_pair.begin(),str_pair.end(),numericComparison);
	}
	else{
		sort(str_pair.begin(),str_pair.end(),lexographicComparison);
	}
	
	if(reversal=="true"){
		reverse(str_pair.begin(),str_pair.end());
	}
	
	for(auto x:str_pair){
		cout<<x.first<<endl;
	}
	
	return 0;
}