#include<iostream>
using namespace std;

long long solve(long long x){
if(x < 9) return x;
return x%9 + 10*solve(x/9);
}

int main(){
long long x;
while(cin >> x){
cout << solve(x) << "\n";
}
return 0;
}
