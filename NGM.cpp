#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int n){
  if(n%10==0)
    cout<<2<<endl;
  else
    cout<<1<<endl<<n%10;
}

signed main()
{
  int n;
  cin>>n;
  solve(n);
  return 0;
}