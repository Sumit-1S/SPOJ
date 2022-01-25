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
  int n,m,o;
  cin>>n;
  do{
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    int sum=0;
    for(int i=0;i<n;i++)
      sum+=v[i];

    if(sum%n!=0)
      cout<<-1;
    else{
      int temp=sum/n,count=0;
      for(int i=0;i<n;i++)
        if(v[i]<temp)
          count+=(temp-v[i]);
      cout<<count;
    }

    cout<<endl;
    cin>>n;

  }while(n!=-1);
  return 0;
}