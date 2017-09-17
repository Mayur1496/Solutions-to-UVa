#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int cases,a,b,c,min,count=1;
	scanf("%d",&cases);
	while(cases--){
		vector<int> v;
		scanf("%d %d %d",&a,&b,&c);
		v.push_back(a);v.push_back(b);v.push_back(c);
		sort(v.begin(),v.end());
		printf("Case %d: %d\n",count++,v[1]);
	}
}