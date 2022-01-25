#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,dig=1;
    cin>>a>>b;
    if(a==0 and b>0)dig=0;
    else if(a>0 and b==0) dig=1;
    else{
      b = b%4==0?4:b%4;
      dig = pow(a,b);
      dig = dig%10;
    }
    cout<<dig<<endl;
  }
  return 0;
}