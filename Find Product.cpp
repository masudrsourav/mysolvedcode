#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,in,sum=1;
  cin>>t;
  while(t--){
    cin>>in;
    sum=(in*sum)%1000000007;
  }
  cout<<sum<<"\n";
  return 0;
}
