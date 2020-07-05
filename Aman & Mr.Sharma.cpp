#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,count,r,h;
  double sum;
  count=0;
  cin>>t;
  while(t--){
    cin>>r>>h;
    sum=2.0*(22.0/7.0)*r;
    if((100*h)>sum){
      ++count;
    }
  }
  cout<<count<<"\n";
  return 0;
}
