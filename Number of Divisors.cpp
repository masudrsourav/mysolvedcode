#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t,j,i;
  cin>>t;
  while(t--){
    cin>>n;
    j=0;
    for(i=1;i<=sqrt(n);i++){
      if(n%i==0){
        if(n/i==i){
          ++j;
        }
        else{
          ++j;
          ++j;
        }
      }
    }
    cout<<j<<"\n";
  }
  return 0;
}
