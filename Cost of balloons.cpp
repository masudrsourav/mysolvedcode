#include <bits/stdc++.h>
using namespace std;
int main()
{
  int  t,i,j,g,p,a,b,l;
  cin>>t;
  while(t--){
    cin>>g>>p;
    i=0,j=0;
    cin>>l;
    while(l--){
    cin>>a>>b;
    if(a>0){
      ++i;
    }
    if(b>0){
      ++j;
    }
  }
  cout<<i*g+j*p<<"\n";
  }
  return 0;
}
