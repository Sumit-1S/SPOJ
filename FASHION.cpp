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
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> f(n),m(n);
    for(int i=0;i<n;i++)cin>>f[i];
    for(int i=0;i<n;i++)cin>>m[i];
    int sum=0;
    sort(f.begin(),f.end());
    sort(m.begin(),m.end());
    for(int i=n-1;i>=0;i--)
      sum+=f[i]*m[i];
    cout<<sum<<endl;
  }
  return 0;
}