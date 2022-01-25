#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(string s){
  int count=0,n=s.size();
  for(int i=0;i<n;i++)
  {
    if(s[i]=='K'){
      for(int j=i+1;j<n;j++)
      {
        if(s[j]=='E'){
          for(int k=j+1;k<n;k++)
          {
            if(s[k]=='K')
              count++;
          }
        }
      }
    }
  }
  cout<<count<<endl;
}

void solve2(string s){
  int count=0,n=s.size();
  vector<int> a(n,0);
  vector<int> b(n,0);
  for(int i=0;i<n;i++)
  {
    if(s[i]=='K'){
      if(i>0)a[i]=a[i-1]+1;
      else a[i]=1;
    }
    else
      if(i>0)a[i]=a[i-1];
  }
  for(int i=n-1;i>=0;i--)
  {
    if(s[i]=='K'){
      if(i<n-1)b[i]=b[i+1]+1;
      else b[i]=1;
    }
    else
      if(i<n-1)b[i]=b[i+1];
  }
  for(int i=1;i<n-1;i++){
    // cout<<a[i]<<" "<<b[i]<<endl;
    if(s[i]=='E')
      count+=a[i]*b[i];
  }
  cout<<count<<endl;
  return ;
}

signed main()
{
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    // solve(s);
    solve2(s);
  }
  return 0;
}