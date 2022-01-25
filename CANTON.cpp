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
    int n;
    cin>>n;
    int i,sum=0;
    for(i=1;;i++)
    {
      sum+=i;
      if(sum>=n)
        break;
    }
    int diff=n-(sum-i) ,t = i+1;
    if(i%2==0)
      printf("TERM %d IS %d/%d\n",n,diff,t-diff);
    else
      printf("TERM %d IS %d/%d\n",n,t-diff,diff);
  }
  return 0;
}