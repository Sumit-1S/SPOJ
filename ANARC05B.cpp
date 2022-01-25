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
  int n,m;
  cin>>n;
  vector<int>a,b;
  
  do{
    a.resize(n+1);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    b.resize(m+1);
    for(int j=0;j<m;j++)cin>>b[j];
    a[n]=10001;
    b[n]=10001;
    int i=0,j=0,tot=0;
    while(i<=n or j<=m)
    {
      int sum1=0,sum2=0;
      while(a[i]!=b[j] and (i<n or j<m))
      {
        if(a[i]<b[j])
          sum1+=a[i],i++;
        else
          sum2+=b[j],j++;
      }
      tot+=max(sum1,sum2)+a[i];
      i++;
      j++;
    }
    a.clear();
    b.clear();
    cout<<tot-10001<<endl;
    cin>>n;
  }while(n!=0);
  return 0;
}