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
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int m;
  cin>>m;
  while(m--)
  {
    int s,e;
    cin>>s>>e;
    cout<<*max_element(v.begin()+s,v.begin()+e)<<endl;
  }
  return 0;
}