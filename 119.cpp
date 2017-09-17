#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
  int n,money,t,temp=0;
  string name, frnd;
  while(cin>>n){
    vector <string> names;
    map<string, int> map;
    for (int i = 0; i < n; i++) {
      cin>>name;
      map[name]=0;
      names.push_back(name);
    }
    for (int i = 0; i < n; i++) {
      cin>>name>>money>>t;
      if(t>0){
        map[name]+=money%t;
        map[name]-=money;
        for (int j = 0; j < t; j++) {
          cin>>frnd;
          map[frnd]+=money/t;
        }
      }
    }
    if (temp>0) {
      cout << endl;
    }
    for (int i = 0; i < n; i++) {
      cout<<names[i]<<" "<<map[names[i]]<<endl;
    }
    temp++;
  }
  return 0;
}
