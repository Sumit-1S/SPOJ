#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(){
  
}

signed main()
{
  int n,count=0;
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    for(int j=i;j<=n;j++)
      if(i*j<=n)
        count++;
  }
  cout<<count<<endl;
  return 0;
}