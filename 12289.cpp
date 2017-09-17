#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	while(cases--){
		string word;
		int flag=0;
		cin>>word;
		if(word.length()==5)
			cout<<"3"<<endl;
		else{
			if(word[0]=='o')
				flag++;
			if(word[1]=='n')
				flag++;
			if(word[2]=='e')
				flag++;
			if(flag>1)
				cout<<"1"<<endl;
			else
				cout<<"2"<<endl;
		}

	}
}