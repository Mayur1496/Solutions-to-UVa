#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
  int n,money,t;
  string name, frnd;
  vector <string> names;
  cin>>n;
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
      map[name]+=money%t;
      map[name]-=money;
      for (int j = 0; j < t; j++) {
        cin>>frnd;
        map[frnd]+=money/t;
      }
    }
    for (int i = 0; i < n; i++) {
      cout<<names[i]<<" "<<map[names[i]]<<endl;
    }
    cout<<endl;
  }
  return 0;
}
