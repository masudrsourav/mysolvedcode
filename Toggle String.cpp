#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s[10000];
  cin>>s;
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='a' && s[i]<='z'){
      printf("%c",(s[i]-32));
    }
    else if(s[i]>='A' && s[i]<='Z'){
      printf("%c",(s[i]+32));
    }
  }
  cout<<"\n";
  return 0;
}
