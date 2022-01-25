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
  float l;
  cin>>l;
  do{
  int i=0;
  float t=0.00,one=1.00;
  while(l>=t)
  {
    t += one/(i+2);
    // cout<<t<<" ";
    i++;
  }
  cout<<i<<" card(s)";
  cout<<endl;
  cin>>l;
  }while(l!=0.00);
  return 0;
}