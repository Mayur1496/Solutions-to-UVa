#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int cases,temp=1;
	cin>>cases;
	while(cases--){
		int max=0;
		vector< pair<string,int> > v;
		for(int i=0; i<10; i++){
			string s;
			int t;
			cin>>s>>t;
			v.push_back(make_pair(s,t));
			if(t>=max)
				max=t;
		}
		for(int i=0; i<10; i++){
			if(i==0)
				cout<<"Case #"<<temp<<":"<<endl;
			if(v[i].second==max)
				cout<<v[i].first<<endl;
		}
		temp++;
	}
}