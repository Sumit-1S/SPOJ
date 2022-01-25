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
  while(t--){
  int s,e;
  cin>>s>>e;
  if(s<2)s=2;
  for(int i=s;i<=e;i++)
  {
    int flag=1;
    if(i>2){
      for(int j=2;j<sqrt(i)+1;j++)
      {
        
        if(i%j==0){
          flag=0;
          break;
        }
      }
      if(flag)
        cout<<i<<endl;
    }
    else
      cout<<2<<endl;
  }
  cout<<endl;
  }
  return 0;
}