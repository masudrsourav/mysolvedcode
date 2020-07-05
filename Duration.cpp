#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,h1,h2,m1,m2,h3,m3;
  cin>>t;
  while(t--){
    h3=0,m3=0;
    cin>>h1>>m1>>h2>>m2;
    h3=h2-h1;
    if(h3<0){
      h3=h3+24;
    }
    m3=m2-m1;
    if(m3<0){
      m3=m3+60;
      h3=h3-1;
    }
    cout<<h3<<" "<<m3<<"\n";
  }
  return 0;
}
