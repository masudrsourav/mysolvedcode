#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cz=0,co=0;
  string a;
  cin>>a;
  for(int i=0;i<a.size();i++){
    if(a[i]=='z'){
      ++cz;
    }
    else if(a[i]=='o'){
      ++co;
    }
  }
  if(2*cz==co){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
  return 0;
}
