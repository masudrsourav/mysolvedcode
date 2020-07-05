#include <bits/stdc++.h>
using namespace std;
int main()
{
  char a[10];
  int c=0,temp1,p;
    scanf("%s",a);
  for(int i=0;i<9;i++){
    if(a[i]>='1' && a[i]<='9'){
      int temp=a[i]-'0';
      if(i+1<=9)
      temp1=a[i+1]-'0';
      if(i+1<=9)
      p=temp+temp1;
      if(p%2!=0){
        c=1;
        break;
      }
      if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || a[2]=='Y'){
        c=1;
        break;
      }
    }
  }
  if(c==0){
    cout<<"valid"<<"\n";
  }
  else{
    cout<<"invalid"<<"\n";
  }
  return 0;
}
