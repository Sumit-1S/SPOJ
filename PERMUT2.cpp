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
  int n;
  cin>>n;
  do{
    int flag=0;
    vector<int> v(n),t(n);
    for(int i=0;i<n;i++)cin>>v[i];
    // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++)t[v[i]-1]=i+1;
    // for(int i=0;i<n;i++)cout<<t[i]<<" ";
    for(int i=0;i<n and flag==0;i++)if(v[i]!=t[i])cout<<"not ambiguous",flag=1;
    if(flag==0)cout<<"ambiguous";
    cout<<endl;
    cin>>n;
  }while(n);
  return 0;
}