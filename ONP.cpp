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
    string s,t="";
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='(')
        continue;
      else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='^')
        st.push(s[i]);
      else if(s[i]==')')
      {
        t+=st.top();
        st.pop();
      }
      else
        t+=s[i];
    }
    cout<<t<<endl;
  }
  return 0;
}