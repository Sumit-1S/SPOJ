#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(int n){
  vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    stack<int> s;
    int cnt=1;
    for(int i=0;i<n;)
    {
      // cout<<a[i]<<" "<<cnt<<endl;
      if(!s.empty() and s.top()==cnt)
        cnt++,s.pop();
      else if(a[i]==cnt)
        cnt++,i++;
      else if(a[i]!=cnt){
        if(s.empty() or s.top()>a[i])
          s.push(a[i]);
        else{cout<<"no";return;}
        i++;
      }
    }
    cout<<"yes";
    return;
}

signed main()
{
  int n;
  cin>>n;
  do{
    solve(n);
    cout<<endl;
    cin>>n;
  }while(n);
  return 0;
}