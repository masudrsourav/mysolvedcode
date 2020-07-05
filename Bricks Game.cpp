#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;;i++){

    if(n<=i){
      cout<<"Patlu"<<"\n";
      break;
    }
    n=n-i;
    if(n<=2*i){
      cout<<"Motu"<<"\n";
      break;
    }
    n=n-2*i;
  }
  return 0;
}
