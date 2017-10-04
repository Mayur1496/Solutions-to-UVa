#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	char title[90],author[90];
	map<string, string> books;
	map<string, string> holder;
	vector<string> list;
	while(1){
		char c=getchar();
		if(c=='E')
			break;
		scanf("%[A-Za-z ] %*c %*[by ] %[A-Za-z ,.] ",title ,author );
		books.insert( pair<string, string>(author, title) );
	}
	//cout<<"Test\n";
	getchar();
	getchar();
	while (1) {
		char cases[10];
		char book[90];
		cin>>cases;
		cout<<cases<<" "<<book<<endl;
		if(cases=="END")
			break;
		else if(cases=="BORROW"){
			cout<<"Test\n";
			scanf("%*c %*c %[A-Za-z ] %*c",&book );
			cout<<book;
			holder.insert( pair<string, string>(books.find(book)->first, books.find(book)->second) );
			books.erase(book);
		}
		else if(cases=="RETURN"){
			scanf("%*c %*c %[A-Za-z ] %*c",&book );
			cout<<book;
			books.insert( pair<string, string>(holder.find(book)->first, holder.find(book)->second) );
			list.push_back(books.find(book)->second);
			holder.erase(book);
		}
		else{
			sort(list.begin(), list.end());
			map<string, string>::iterator it=books.begin();
			for(int i=0; i<list.size(); i++){
				cout<<"Put \"";
				it=books.find(list[i]);
				if(it==books.begin())
					cout<<it->second<<" first"<<endl;
				else{
					cout<<it->second<<" after ";
					it--;
					cout<<it->second<<endl;
				}
			}
			cout<<"END\n";
		}
	}
}
