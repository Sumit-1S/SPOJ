#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int n){
  if(n==1|| n==7)cout<<"Y"<<endl;
  else if(n>1 and n%2==0)cout<<"N"<<endl;
  else{
    int ans=0,i=1;
    while(ans<n)
    {
      ans+=i*6;
      i++;
      if(ans+1==n)
      {
        cout<<"Y"<<endl;
        return;
      }
    }
    cout<<"N"<<endl;
  }
}

signed main()
{
  int n=0;
  while(true){
    cin>>n;
    if(n==-1)break;
    solve(n);
  }
  return 0;
}