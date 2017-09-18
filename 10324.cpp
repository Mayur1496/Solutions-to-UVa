#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
  char str[1000000];
	int cases=1,n;
  while (gets(str)) {
		int x,y,mx,mn;
		cin>>n;
		bool res=true;
		cout<<"Case "<<cases<<":"<<endl;
		cases++;
		for (int i = 0; i < n; i++) {
			res=true;
			cin>>x>>y;
			mx=max(x,y);
			mn=min(x,y);
			for (int j = mn; j <= mx; j++) {
				if(str[mn]!=str[j]){
					res=false;
				}
			}
			if(res)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		getchar();
  }
}
