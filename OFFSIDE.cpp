#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int n, int m){
  vector<int>  v(n),a(m);
  for(int i=0;i<n;i++)cin>>v[i];
  for(int i=0;i<m;i++)cin>>a[i];
  int min=*min_element(v.begin(),v.end());
  int count=0;
  for(int i=0;i<m;i++)
  {
    if(min>=a[i])count++;
    if(count>=2){cout<<"N";return;}
  }
  cout<<"Y";

}

signed main()
{
  int n,m;
  while(true){
    cin>>n>>m;
    if(!n and !m)break;
    solve(n,m);
    cout<<endl;
  }
  return 0;
}