#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int cases,count=1;
	cin>>cases;
	while(cases--){
		int calls,m=0,j=0;
		vector<int> v;
		cin>>calls;
		while(calls--){
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		for(int i=0; i<v.size(); i++){
			j+=((int)floor(v[i]/60.0)+1)*15;
			m+=((int)floor(v[i]/30.0)+1)*10;
		}
		cout<<"Case "<<count<<": ";
		if(m>j)
			cout<<"Juice "<<j;
		else if(m==j)
			cout<<"Mile Juice "<<j;
		else
			cout<<"Mile "<<m;
		cout<<endl;
		count++;
	}
}