#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(){
  int f3,l3,s;
  cin>>f3>>l3>>s;
  int n = (2*s)/(f3+l3);
  int d = (l3-f3)/(n-5);
  int a = f3 - 2*d;
  cout<<n<<endl;
  for(int i=0;i<n;i++)
    cout<<a+i*d<<" ";
  // cout<<n<<" "<<a<<" "<<d<<" "<<endl;
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  solve();
  return 0;
}


// 3rd = a+2*d;
// n-3 = a+(n-3)*d;
// n = 2*a + (n-1)*d
// s = n*n/2
// n = sqrt(2*s)