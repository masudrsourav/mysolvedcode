#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t,n,a[100][100];
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
    int c=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        for(int p=i;p<n;p++){
          for(int q=j;q<n;q++){
            if(a[i][j]>a[p][q]){
              ++c;
            }
          }
        }
      }
    }
    cout<<c<<"\n";
  }
  return 0;
}
