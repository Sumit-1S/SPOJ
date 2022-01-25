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
  int t;
  cin>>t;
  for(int j=0;j<t;j++)
  {
    int m,n;
    cin>>m>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int count=0,g=0;
    for(int i=n-1;i>=0 and count<m;i--)
    {
      count+=v[i];
      // cout<<count<<" ";
      g++;
    }
    cout<<"Scenario #"<<j+1<<":"<<endl;
    if(count>=m)
      cout<<g<<endl;
    else
      cout<<"impossible"<<endl;
    cout<<endl;
  }
  return 0;
}