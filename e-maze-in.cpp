#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int p=0,h=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='R'){
      ++p;
    }
    else if(s[i]=='L'){
      --p;
    }
    else if(s[i]=='U'){
      ++h;
    }
    else if(s[i]=='D'){
      --h;
    }
  }
  cout<<p<<" "<<h<<"\n";
  return 0;
}
