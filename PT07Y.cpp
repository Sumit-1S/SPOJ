#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>


vector<int> e[10006];
int vis[10006];

void dfs(int i)
{
  vis[i]=1;
  for(int j=0;j<e[i].size();j++){
    int x=e[i][j];
    if(!vis[x])
      dfs(x);
  }
}

void solve(){
  int n,m,u,v,t=0;
  cin>>n>>m;
  while(m>t)
  {
    t++;
    cin>>u>>v;
    e[u].push_back(v);
    e[v].push_back(u);
  }
  
  if(m!=n-1){
    cout<<"NO"<<endl;
    return;
  }
  int cc=0;
  for(int i=1;i<=n;i++)
  {
    if(vis[i]==0)
    {
      cc++;
      dfs(i);
    }
  }
  
  if(cc==1)
  cout<<"YES";
  else
  cout<<"NO";
  cout<<endl;
}

signed main()
{
  solve();
  return 0;
}