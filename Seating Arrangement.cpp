#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if((n-1)%12==0){
      cout<<n+11<<" "<<"WS"<<"\n";
    }
    else if((n-2)%12==0){
      cout<<n+9<<" "<<"MS"<<"\n";
    }
    else if((n-3)%12==0){
      cout<<n+7<<" "<<"AS"<<"\n";
    }
    else if((n-4)%12==0){
      cout<<n+5<<" "<<"AS"<<"\n";
    }
    else if((n-5)%12==0){
      cout<<n+3<<" "<<"MS"<<"\n";
    }
    else if((n-6)%12==0){
      cout<<n+1<<" "<<"WS"<<"\n";
    }
    else if((n-7)%12==0){
      cout<<n-1<<" "<<"WS"<<"\n";
    }
    else if((n-8)%12==0){
      cout<<n-3<<" "<<"MS"<<"\n";
    }
    else if((n-9)%12==0){
      cout<<n-5<<" "<<"AS"<<"\n";
    }
    else if((n-10)%12==0){
      cout<<n-7<<" "<<"AS"<<"\n";
    }
    else if((n-11)%12==0){
      cout<<n-9<<" "<<"MS"<<"\n";
    }
    else if((n-12)%12==0){
      cout<<n-11<<" "<<"WS"<<"\n";
    }

  }
  return 0;
}
