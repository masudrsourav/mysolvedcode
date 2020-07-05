#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string a;
  cin>>t;

  while(t--){
    cin>>a;
    reverse(a.begin(),a.end());
    cout<<a<<"\n";
  }
  return 0;
}
