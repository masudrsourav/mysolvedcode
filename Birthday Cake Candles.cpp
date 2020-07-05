#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int ar[100000];
  long long int n;
  cin>>n;
  for(long long int i=0;i<n;i++){
    cin>>ar[i];
  }
  sort(ar,ar+n);
  long long int l=ar[n-1];
  int count=0;
  for(long long int i=0;i<n;i++){
    if(ar[i]==l)
    ++count;
  }
  cout<<count<<"\n";
  return 0;
}
