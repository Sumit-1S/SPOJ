#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int count){
  double r,ac,ab;
  cin>>r;
  ac = 0.5;
  ab = (16.0*r*r - 1)/4.0;
  printf("Case %d: %.2lf",count,ab+ac);
  cout<<endl;
}

signed main()
{
  int t,i=0;
  cin>>t;
  while(t--)
  solve(++i);
  return 0;
}