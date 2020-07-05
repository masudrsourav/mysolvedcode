#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,sum;
  cin>>t;
  while(t--){
    sum=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
      if(n%i==0){
        if(n/i==i){
          sum+=i;
        }
        else{
          sum+=i;
          sum+=n/i;
        }
      }
    }
    cout<<sum-n<<"\n";
  }
  return 0;
}
