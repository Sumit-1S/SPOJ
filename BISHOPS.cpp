#include<bits/stdc++.h>
#include<string>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

string conv(int a)
{
  ostringstream strm;
  strm<<a;
  return strm.str();
}

string sum(string &a,string &b)
{
    string res = "";
    int c = 0;
    int i = a.length()-1,j = b.length()-1;
    while(i >= 0 || j >= 0)
    {
        int cur = 0;
        if(i >= 0)
            cur = cur +  (a[i]-'0');
        if(j >= 0)
            cur = cur +  (b[j]-'0');
        cur = cur + c;
        res = conv(cur%10) + res;
        c = cur/10;
        i--,j--;
    }
    if(c > 0)
        res = conv(c)+res;
    return res;
}

string sub(string &f,string &s)
{
    string res = "";
    int c = 0;
    int i = f.length()-1,j = s.length()-1;
    while(i >= 0 || j >= 0)
    {
        int a = i>=0?(f[i]-'0'):0;
        int b = j>=0?(s[j]-'0'):0;
        if(a >= b+c)
        {
            res = conv(a-b-c) + res;
            c = 0;
        }
        else
        {
            res = conv(10+a-b-c) + res;
            c = 1;
        }
        i--,j--;
    }
    return res;
}

signed main()
{
  string a,two="2";
  while(cin>>a){
    if(a=="1")cout<<1<<endl;
    else{
      string temp = sub(a,two);
      cout<<sum(a,temp)<<endl;
    }
  }
  return 0;
}