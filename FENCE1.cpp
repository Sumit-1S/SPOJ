#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(double len){
  float area = (len*len)/(2*3.141592654);
  printf("%.2f\n",area);
}

signed main()
{
  double n;
  cin>>n;
  do{
  solve(n);
  cin>>n;
  }while(n);
  return 0;
}