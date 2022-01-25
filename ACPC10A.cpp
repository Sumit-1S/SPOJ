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
  int a,b,c;
  cin>>a>>b>>c;
  do{
    if(2*b==a+c)
    {
      cout<<"AP "<<c+(b-a);
    }
    else
    {
      cout<<"GP "<<c*(b/a);
    }
    cout<<endl;
    cin>>a>>b>>c;
  }while(a or b or c);
  return 0;
}