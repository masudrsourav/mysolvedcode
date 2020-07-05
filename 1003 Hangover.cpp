//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    while(cin>>n){
      if(n==0){
        break;
      }
      double k=2.0;
      double sum=0;
      int c=1;
      while(1){
        sum+=(1.0/k);
        if(sum>=n){
          break;
        }
        ++c;
        k+=1.0;
      }
      cout<<c<<" card(s)"<<"\n";
    }

    return 0;
}
