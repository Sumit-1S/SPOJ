#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(){
  int n;
  cin>>n;
  int count=0;
  count = (n)*(n+2)*(2*n+1)/8;
  cout<<count<<endl;
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  solve();
  return 0;
}