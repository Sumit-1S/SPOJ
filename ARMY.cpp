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
    int n,m,i,j;
    cout<<endl;
    cin>>n>>m;
    vector<int> na(n),nm(m);
    for(int i=0;i<n;i++)cin>>na[i];
    for(int i=0;i<m;i++)cin>>nm[i];
    int mx1=-1;
    mx1 = *max_element(na.begin(),na.end());
    int mx2=-1;
    mx2 = *max_element(nm.begin(),nm.end());
    if(mx1>=mx2)cout<<"Godzilla";
    else cout<<"MechaGodzilla";
    cout<<endl;
  }
  return 0;
}