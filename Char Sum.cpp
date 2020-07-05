#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
    sum+=(s[i]-'a')+1;
  }
  cout<<sum<<"\n";
  return 0;
}
