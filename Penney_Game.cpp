#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(){
  string s;
  int a;
  cin>>a;
  cin>>s;
  // cout<<s;
  map<string,int> m;
  m["TTT"]=0;
  m["TTH"]=0;
  m["THT"]=0;
  m["THH"]=0;
  m["HTT"]=0;
  m["HTH"]=0;
  m["HHT"]=0;
  m["HHH"]=0;
  for(int i=0;i<s.size()-2;i++)
  {
    string temp = string()+s[i]+s[i+1]+s[i+2];
    // cout<<temp<<" ";
    m[temp]++;
  }
  cout<<a<<" ";
  cout<<m["TTT"]<<" ";
  cout<<m["TTH"]<<" ";
  cout<<m["THT"]<<" ";
  cout<<m["THH"]<<" ";
  cout<<m["HTT"]<<" ";
  cout<<m["HTH"]<<" ";
  cout<<m["HHT"]<<" ";
  cout<<m["HHH"]<<" ";
}

signed main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
    cout<<endl;
  }
  return 0;
}