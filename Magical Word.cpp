#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  char s[10001];
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    for(int i=0;i<n;i++){
      if(s[i]%2!=0 && s[i]!=s[i+1])
      printf("%c",(s[i]+2));
      else if(s[i]%2==0 && s[i]!=s[i+1])
      printf("%c",(s[i]+1));
      else if(s[i]==s[i+1]){
      printf("%c%c",(s[i]-2),(s[i+1]-2));
      i=i+1;
    }
    }

    cout<<"\n";
  }
}
