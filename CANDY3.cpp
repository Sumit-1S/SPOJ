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
    int n,t;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
      cin>>t;
      ans = (ans + (t%n))%n;
    }
    ans==0?cout<<"YES":cout<<"NO";
    cout<<endl;
  }
  return 0;
}