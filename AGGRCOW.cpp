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
  while(t--){
    int n,c;
    cin>>n>>c;
    vector<int> loc(n);
    for(int i=0;i<n;i++)
      cin>>loc[i];
    sort(loc.begin(),loc.end());
    int gap=0,l=0,h=loc[n-1];
    while(l<=h)
    {
      int mid = (l+h+1)/2;
      int cnt = 1,left=0;
      for(int i=1;i<n and cnt<c;i++)
      {
        if(loc[i]-loc[left]>=mid)
          left=i,cnt++;
      }
      if(cnt>=c)
        gap=mid,l=mid+1;
      else
        h=mid-1;
      
    }
    cout<<gap<<endl;
  }
  return 0;
}