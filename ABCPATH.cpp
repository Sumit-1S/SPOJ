#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>


int solve(vector<vector<char> > v,vector<vector<int> > &vis,int i,int j,int count){
  if(i<0 || j<0 || i>=v.size() || j>=v[i].size() || v[i][j]!='A'+count || vis[i][j]==1)
    return 0;
  vis[i][j]=1;
  // cout<<v[i][j]<<" ";

  int s[8][2] = {{i-1,j-1},
                  {i-1,j},
                  {i-1,j+1},
                  {i,j-1},
                  {i,j+1},
                  {i+1,j-1},
                  {i+1,j},
                  {i+1,j+1}};
  int mx=0;
  for(int k=0;k<8;k++)
  {
    int i_=s[k][0],j_=s[k][1];
    mx = max(mx,solve(v,vis,i_,j_,count+1));
  }
  return mx+1;
}


signed main()
{
  int n,m,t=0;
  cin>>n>>m;
  do{
    t++;
    vector<vector<char> > v(n,vector<char> (m));
    vector<vector<int> > vis(n,vector<int> (m,0));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>v[i][j];
    int count=0,mx=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(v[i][j]=='A')
          mx = max(mx,solve(v,vis,i,j,count));
    cout<<"Case "<<t<<": "<<mx<<endl;
  cin>>n>>m;
  }while(n and m);
  return 0;
}