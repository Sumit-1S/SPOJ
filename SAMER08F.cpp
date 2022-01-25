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
  int n;
  cin>>n;
  do{
    int sum=0;
    // for(int i=1;i<=n;i++)sum+=pow(i,2);
    sum = n*(n+1)*(2*n+1)/6;
    cout<<sum<<endl;
    cin>>n;
  }while(n);
  return 0;
}