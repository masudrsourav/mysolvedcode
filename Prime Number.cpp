#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,count;
  cin>>n;
  count=0;
  for(int i=2;i<=n;i++){
    int p=0;
    int temp=i;
    if(i>=2){
    for(int j=2;j<=sqrt(temp);j++){
      if(temp%j==0){
        p=1;
        break;
      }
    }
    }
    if(p==0){
      cout<<i<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
