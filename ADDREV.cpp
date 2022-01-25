#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

int rev(int n){
  int temp=0;
  while(n){
    temp = temp*10+n%10;
    n/=10;
  }
  return temp;
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    cout<<rev(rev(a)+rev(b))<<endl;
  }
  return 0;
}