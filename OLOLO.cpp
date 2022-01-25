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
  int ans,t;
  cin>>ans;
  while(--n)
  {
    cin>>t;
    ans^=t;
  }
  cout<<ans;
}

signed main()
{
  solve();
  return 0;
}