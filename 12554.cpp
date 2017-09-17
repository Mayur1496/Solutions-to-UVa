#include<iostream>
#include <vector>
using namespace std;
int main(){
  vector<string> names;
  int n,songlen=0,i=0,count,flag=1,people;
  cin>>n;
  count=n;
  people=n;
  while(count--){
    string s;
    cin>>s;
    names.push_back(s);
  }
  while(1){
  if(people<=0) break;
  while(songlen!=16&&flag==1){
    if(songlen==11){
      cout<<names[i]<<": Rujia"<<endl;
      flag=1;
    }
    else if(songlen%4==0){
      cout<<names[i]<<": Happy"<<endl;
      flag=1;
    }
    else if(songlen%4==1){
      cout<<names[i]<<": birthday"<<endl;
      flag=1;
    }
    else if(songlen%4==2){
      cout<<names[i]<<": to"<<endl;
      flag=1;
    }
    else if(songlen%4==3){
      cout<<names[i]<<": you"<<endl;
      if(songlen==15) flag=0;
    }
    i=(i+1)%n;
    songlen=(songlen+1)%16;
    people--;
  }
  songlen=0;
  flag=1;
}
}
