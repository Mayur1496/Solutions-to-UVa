#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> path{2,4,1,2,1,4,1,2,3,2,3,4,3,1,2,1,2,3,4,2,3,4,2,3};
  int flag;
  do {
    flag = 0;
    for (int i=0; i < path.size(); i++) {
      if ( abs(path[i] - path[i + 1]) == 2) {
        path.erase(path.begin()+i, path.begin()+i+2);
		i--;
        flag++;
      }
    }
  } while (flag>0);
  
  for(int i=0; i<path.size(); i++){
	  cout<<path[i];
  }
  cout<<endl;
}