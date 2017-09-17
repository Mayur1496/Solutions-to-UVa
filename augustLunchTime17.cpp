#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int cost[26];
		char temp;
		vector<char> c;
		vector<char>::iterator it;
		for(int i=0;i<26;i++){
			scanf("%d ",&cost[i]);
			c.push_back(i+97);
		}
		while((temp=getchar())!='\n'){
			if(c.empty())
				break;
			it=search_n(c.begin(), c.end(), 1, temp);
			if(it!=c.end())
				c.erase(it);
		}
		if(c.empty())
			printf("0\n");
		else{
			int sum=0;
			for(int j=0; j<c.size(); j++)
				sum+=cost[c[j]-97];
			printf("%d\n",sum);
		}
	}
}