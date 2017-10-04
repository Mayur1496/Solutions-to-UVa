#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int ip[3000],size;
	bool stat;
	vector<int> diff;
	while( cin>>size ){
		if(size==0){
			cout<<"Not jolly\n";
			continue;
		}
		diff.clear();
		for (size_t i = 0; i < size; i++) {
			cin>>ip[i];
			if(i>0)
				diff.push_back(abs(ip[i]-ip[i-1]));
		}
		sort(diff.begin(), diff.end());
		stat=true;
		for (size_t i = 0; i < diff.size(); i++) {
			if(diff[i]!=i+1){
				stat=false;
				break;
			}
		}
		if(stat) cout<<"Jolly\n";
		else cout<<"Not jolly\n";
	}
}
