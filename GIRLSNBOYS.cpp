#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int g ,int b){
  int ans;
  if(g>=b)
  {
    b++;
    ans=g/b;
    if(g%b)
      ans+=1;
  }
  else
  {
    g++;
    ans=b/g;
    if(b%g)
      ans+=1;
  }
  cout<<ans<<endl;
}

signed main()
{
  int g,b;
  while(true)
  {
    cin>>g>>b;
    if(g==-1 and b==-1)
      break;
    solve(g,b);
  }
  return 0;
}