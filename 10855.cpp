#include <iostream>
using namespace std;

void rotate(char **small, int b){
	char **temp;
	for (size_t i = 0; i < b; i++)
		temp[i] = new char[b];

	for (size_t i = 0; i < b; i++)
		for (size_t j = 0; j < b; j++)
			temp[i][j]=small[i][j];

	for (size_t i = 0; i < b; i++)
		for (size_t j = b-1; j >= 0; j--)
			small[i][b-j-1]=temp[j][i];

	for (int i = 0; i < b; i++) delete [] temp[i];
	delete [] temp;
}

int main(){
	int a,b;
	int result[4]={0};
	while(1){
		cin>>a>>b;
		if(a==0 && b==0) break;
		char **big, **small;
		big = new char*[a];
		small = new char*[b];
		for (size_t i = 0; i < a; i++)
			big[i] = new char[a];
		for (size_t i = 0; i < b; i++)
			small[i] = new char[b];
		for (size_t i = 0; i < a; i++)
			for (size_t j = 0; j < a; j++)
				cin>>big[i][j];
		for (size_t i = 0; i < b; i++)
			for (size_t j = 0; j < b; j++)
				cin>>small[i][j];

		for (size_t i = 0; i < 4; i++) {
			result[i] = count(big, a, small, b);
			rotate(small, b);
		}

		for (size_t i = 0; i < 4; i++) {
			if(i>0) cout<<" ";
			cout<<result[i];
		}
		cout<<endl;

		for (int i = 0; i < a; i++) {
      delete [] big[i];
    }
    delete [] big;

    for (int i = 0; i < b; i++) {
      delete [] small[i];
    }
    delete [] small;
	}
}
