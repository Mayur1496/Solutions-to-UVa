#include<iostream>
using namespace std;
int main(){
	int num,sum;
	while(cin>>num){
		if(num==0)
			break;
		while(1){
			sum=0;
			while(1){
				sum+=(num%10);
				num/=10;
				if(num<10){
					sum+=num;
					num=sum;
					break;
				}
			}
			if(sum<10){
				cout<<sum<<endl;
				break;
			}
		}
		
	}
}