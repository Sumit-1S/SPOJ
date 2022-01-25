#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

int solve(char *s){
  int t=0;
  for(int i=0;s[i];i++)
  {
    if(s[i]>='0' and s[i]<='9')
      t=t*10+(s[i]-'0');
    else 
      return -1;
  }
  return t;
}

signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char a[100],b[100],c[100];
    scanf("%s + %s = %s",&a,&b,&c);
    int A = solve(a);
    int B = solve(b);
    int C = solve(c);
    if(A==-1)
      A = C - B;
    else if(B==-1)
      B = C - A;
    else if(C==-1)
      C = B + A;
    printf("%d + %d = %d",A,B,C);
    cout<<endl;
  }
  return 0;
}