#include <iostream>
using namespace std;
int main(){
  int n,m,c,cases=1;
  while (1) {
    cin>>n>>m>>c;
    int device[20],cap=0,max=0;
    bool state[20];
    if (n==0 && m==0 &&c==0)
      break;
    for (int i = 0; i < n; i++) {
      cin>>device[i];
      state[i]=false;
    }
    for (int i = 0; i < m; i++) {
      int t;
      cin>>t;
      if(state[t-1]){
        state[t-1]=false;
        cap-=device[t-1];
      }
      else{
        state[t-1]=true;
        cap+=device[t-1];
        if(cap>=max)
          max=cap;
      }
    }
    if(max>c)
      cout<<"Sequence "<<cases<<endl<<"Fuse was blown."<<endl<<endl;
    else
      cout<<"Sequence "<<cases<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<max<<" amperes."<<endl<<endl;
    cases++;
  }
}
