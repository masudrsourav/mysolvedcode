#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,c;
  cin>>t;
  while(t--){
    c=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
      if(n%i==0){
        if(n/i==i){
          ++c;
        }
        else{
          c+=2;
        }
      }
    }
    cout<<c<<"\n";
  }
  return 0;
}
