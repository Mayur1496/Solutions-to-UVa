#include <iostream>
#include <map>
using namespace std;
int main(){
	int cases;
	string line;
	cin>>cases;
	while(cases--){
		double costs;
		cin>>costs;
		map<char, double> cost;
		map<char, double>::iterator it;
		for (int i = 0; i < costs; i++) {
			char c;
			cin>>c;
			double d;
			cin>>d;
			cost.insert(pair<char, double>(c,d));
		}
		double lines;
		double amount=0;
		cin>>lines;
		cin.ignore();
		for (int i = 0; i < lines; i++) {
			line="";
			getline(cin,line);
			int size = line.size();
			for (int k = 0; k < size; k++) {
				it = cost.find(line[k]);
				if(it != cost.end())
					amount+= it->second;
			}
		}
		printf("%0.2lf$\n",amount/100);
		cost.clear();
	}
}
