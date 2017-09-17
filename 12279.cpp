#include<iostream>
using namespace std;
int main(){
	int n,temp,cases=1;
	while(cin>>n){
		if(n==0)break;
		int bal=0;
		while(n--){
			cin>>temp;
			if(temp==0)
				bal--;
			else
				bal++;
		}
		cout<<"Case "<<cases<<": "<<bal<<endl;
		cases++;
	}
}