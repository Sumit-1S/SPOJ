#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>
 

map<int,int> m;
int solve(int n){
  if(n<12)return n;
  if(m.find(n)!=m.end())return m[n];
  return m[n] = solve(n/2)+solve(n/3)+solve(n/4);
}

signed main()
{
  int n;
  while(cin>>n)
    cout<<solve(n)<<endl;
  return 0;
}