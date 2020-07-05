#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int m,a[100001];
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  sort(a,a+m,greater<int>());
  long long int k=a[m-1];
  for(int i=0;i<m-1;i++){
    cout<<a[i]%k;
    if(i!=m-2){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
