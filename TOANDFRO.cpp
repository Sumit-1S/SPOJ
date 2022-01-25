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
    vector<vector<char> >v,ans;
    vector<char> temp(n);
    string s;
    cin>>s;
    for(int i=0;i<s.size()/n;i++){
      for(int j=0;j<n;j++){
        if(i%2==0)
          temp[j]=s[i*n+j];
        else
          temp[n-j-1]=s[i*n+j];
      }
      v.push_back(temp);
    }
    
    for(int j=0;j<n;j++)
    {
      for(int i=0;i<v.size();i++)
        cout<<v[i][j];
    }
    cout<<endl;
    cin>>n;
  }while(n);

  return 0;
}