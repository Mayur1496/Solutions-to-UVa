#include <iostream>
using namespace std;
int main(){
	int h,l;
	while(1){
		cin>>h>>l;
		if(h==0 && l==0) break;
		int count=0,prev=h,curr,step=0;
		for (size_t i = 0; i < l; i++) {
			cin>>curr;
			if(curr<prev)
				count+=(prev-curr);
			prev=curr;
		}
		cout<<count<<endl;
	}
}
