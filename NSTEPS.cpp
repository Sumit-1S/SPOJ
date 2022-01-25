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
    int a,b;
    cin>>a>>b;
    if(a-b==0 or a-b==2)
    {
      if(a==b){
        if(a%2==0)
          cout<<a*2;
        else
          cout<<a*2-1;
      }
      else{
        if(a%2==0)
          cout<<a+b;
        else
          cout<<a+b-1;
      }
    }
    else
    cout<<"No Number";
    cout<<endl;
  }
  return 0;
}