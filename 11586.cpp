#include <iostream>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	getchar();
	while(cases--){
		int m=0,f=0;
		char c;
		while( (c=getchar()) != '\n'){
			if(c=='M')
				m++;
			else if(c=='F')
				f++;
		}
		if(m==f && m!=1)
			cout<<"LOOP\n";
		else
			cout<<"NO LOOP\n";
	}
}
