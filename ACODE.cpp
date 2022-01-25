#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

// Recursive Approach
// void helper1(string n,int pos,int &count){
//   if(pos>=n.size()){count++;return;}
//   if(n[pos]-'0'<10 and n[pos]-'0'>=0)cout<<n[pos]-'0'<<endl,helper1(n,pos+1,count);
//   if((n[pos]-'0')*10+(n[pos+1]-'0')<27 and (n[pos]-'0')*10+(n[pos+1]-'0')>9)
//     cout<<n[pos]-'0'*10+n[pos]-'0'<<endl,helper1(n,pos+2,count);
// }

// Dynamic Programming
void helper2(string n,int &count)
{
  vector<int> v(n.size(),0);
    v[0]=1;
    for(int i=1;i<n.size();i++)
    {
      if(n[i]!='0' )
      {
        v[i]=v[i-1];
      }
      if(n[i-1]=='1' or (n[i-1]=='2' and n[i-1]<='6')){
        if(i==1)
          v[i]+=1;
        else
          v[i]=v[i]+v[i-2];
      }
    }
    count=v[n.size()-1];
}

signed main()
{
  string n;
  cin>>n;
  int count=0,i=0;
  do{
    count=0;
    // Recursive Approach
    // helper1(n,i,count);

    // Iterative Approach
    helper2(n,count);
    cout<<count<<endl;
    cin>>n;
  }while(n!="0");
  return 0;
}