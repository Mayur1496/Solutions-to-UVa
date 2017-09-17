#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
  int n,money,t,temp=0;
  string name, frnd;
  vector <string> names;
  while(cin>>n){
    name.clear();
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
      std::cout << '\n';
    }
    for (int i = 0; i < n; i++) {
      cout<<names[i]<<" "<<map[names[i]]<<endl;
    }
  }
  return 0;
}
