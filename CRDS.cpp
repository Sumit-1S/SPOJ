#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int n){
  if(n==1)cout<<2<<endl;
  else{
    int sum1=(n-1)*(n)/2,sum2=n;
    sum1 = (sum1*3)%1000007;
    sum2 = (n*2)%1000007;
    cout<<(sum1+sum2)%1000007<<endl;
  }
}

signed main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    solve(n);
  }
  return 0;
}