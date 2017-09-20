#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	char c;
	int v1,v2,s1,s2;
	while ( (c=getchar()) != EOF ) {
		s1=0; s2=0; v1=0; v2=0;
		do {
			c=tolower(c);
			if( c>96 && c<123)
				v1+=(c-96);
		} while( (c=getchar()) != '\n');

		while ( (c=getchar()) != '\n') {
			c=tolower(c);
		 	if( c>96 && c<123)
				v2+=(c-96);
		}
		while(v1>9){
			s1+=(v1%10);
			v1/=10;
			if(v1<10){
				s1+=v1;
				v1=s1;
				s1=0;
			}
		}
		while(v2>9){
			s2+=(v2%10);
			v2/=10;
			if(v2<10){
				s2+=v2;
				v2=s2;
				s2=0;
			}
		}
		if(v1>v2)
			swap(v1,v2);
		printf("%.2f %%\n", (((float)v1/v2)*100.0) );
	}
	return 0;
}
