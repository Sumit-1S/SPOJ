#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

int solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  if(n==0)return 0;
  if(n==1)return v[0];
  if(n==2)return max(v[0],v[1]);
  vector<int> dp(n);
  dp[0]=v[0];
  dp[1]=max(dp[0],v[1]);
  for(int i=2;i<n;i++)
  dp[i] = max(v[i]+dp[i-2],dp[i-1]);
  return dp[n-1];
}

signed main()
{
  int t,i=1;
  cin>>t;
  while(t--){
  cout<<"Case "<<i++<<": "<<solve()<<endl;
  }
  return 0;
}