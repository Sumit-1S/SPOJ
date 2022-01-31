#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vl vector<ll>
#define vs vector<string>
#define vvl vector<vector<ll,ll> >
#define mll map<ll,ll>

void solve(string x){
  stack<char> s;
	int ret = 0;
	for ( int i = 0; i < x.size(); ++i )
	{
		char c = x[ i ];
		if ( c == '{' )
			s.push( c );
		else if ( !s.empty() && s.top() == '{' )
			s.pop();
		else {
			ret++;
			s.push( '{' );
		}
	}
	ret += s.size() / 2;
	cout<<ret<<endl;
}

signed main()
{
  string s;
  int i=0;
  while(true){
    cin>>s;
    if(s[0]=='-')break;
    cout<<++i<<". ";
    solve(s);
  }
  return 0;
}