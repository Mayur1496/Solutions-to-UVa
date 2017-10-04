#include <iostream>
using namespace std;
int main(){
	int s,b;
	int *l = new int[100005];
	int *r = new int[100005];
	while(1){
		cin>>s>>b;
		if (s==0 && b==0) break;
		for (int i = 1; i <= s; i++) {
			l[i] = i-1;
			r[i] = i+1;
		}
		for (int i = 0; i < b; i++) {
			int L,R;
			cin>>L>>R;
			if(l[L]<1) cout<<"* ";
			else cout<<l[L]<<" ";

			if(r[R]>s) cout<<"*"<<endl;
			else cout<<r[R]<<endl;

			l[r[R]] = l[L];
			r[l[L]] = r[R];
		}
		cout<<"-"<<endl;
	}
	delete l;
	delete r;
}
