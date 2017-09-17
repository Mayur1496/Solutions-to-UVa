#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<string> trans={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
	vector<string> lang={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
	string word;
	int cases=1,i;
	while(cin>>word){
		if(word=="#")
			break;
		for(i=0; i<6; i++){
			if(word==trans[i]){
				cout<<"Case "<<cases<<": "<<lang[i]<<endl;
				break;
			}
		}
		if(i==6)
			cout<<"Case "<<cases<<": UNKNOWN"<<endl;
		cases++;
	}
}