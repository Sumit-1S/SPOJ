#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

int solve(int n){
  int count=0;
  for(int i=5;n/i>0;i*=5)count+=n/i;
  return count;
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,temp;
    cin>>n;
    temp=solve(n);
    // temp>0?cout<<n/temp-1:cout<<0;
    cout<<temp<<endl;
  }
  return 0;
}