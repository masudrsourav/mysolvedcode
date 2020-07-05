#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  long long int sum=0;
  int l=s.size();
  if(l!=10){
    cout<<"Illegal ISBN"<<"\n";
  }
  else if(l==10){
    for(int i=0;i<l;i++){
      sum+=(s[i]-'0')*(i+1);
    }
    if(sum%11==0){
      cout<<"Legal ISBN"<<"\n";
    }
    else{
      cout<<"Illegal ISBN"<<"\n";
    }
  }
  return 0;
}
