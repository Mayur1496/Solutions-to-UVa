#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int k,m,r,c,co[100],t[100];
	while(1){
		int count=0,flag=0;
		cin>>k;
		if(k==0) break;
		cin>>m;
		for (int i = 0; i < k; i++) {
			cin>>co[i];
		}
		for (int i = 0; i < m; i++) {
			count=0;
			cin>>c>>r;
			for (int i = 0; i < c; i++) {
				cin>>t[i];
				int *p;
				p=find(co, co+k, t[i]);
				if(p!=co+k)
					count++;
			}
			if(count>=r)
				flag++;
		}
		if(flag>=m)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}
