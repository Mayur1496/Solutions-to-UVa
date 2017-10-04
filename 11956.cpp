#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int cases,no=1;
	cin>>cases;
	getchar();
	while (cases--) {
		int mem[10000]={0},p=0;
		char c;
		while( (c=getchar())!='\n'){
			switch (c) {
				case '>':
					p=(p+1)%100;
					break;
				case '<':
					p=(p+99)%100;
					break;
				case '+':
					mem[p]=(mem[p]+1)%256;
					break;
				case '-':
					mem[p]=(mem[p]+255)%256;
					break;
				case '.':
					break;
			}
		}
		cout<<"Case "<<no<<":";
		for (size_t i = 0; i < 100; i++) {
			printf(" %02X",mem[i]);
		}
		cout<<endl;
		no++;
	}
}
