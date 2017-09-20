#include <iostream>
using namespace std;
int main(){
	int l;
	while(1){
		cin>>l;
		if(l==0) break;
		int min=2000000,count=0;
		char road[2000000],s='0';
		for (size_t i = 0; i < l; i++) {
			cin>>road[i];
			if (road[i]=='Z'){
				min=0;
			}
			else if (road[i]=='D'){
				if(s=='R'){
					count++;
					if(count<min)
						min=count;
					count=0;
					s='D';
				}
				else{
					count=0;
					s='D';
				}
			}
			else if (road[i]=='R'){
				if(s=='D'){
					count++;
					if(count<min)
						min=count;
					count=0;
					s='R';
				}
				else{
					count=0;
					s='R';
				}
			}
			else{
				if(s!='0')
					count++;
			}
		}
		cout<<min<<endl;
	}
}
