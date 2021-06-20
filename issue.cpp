#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int t,n;
  cin >> t;
vector<pair<int,string>> v;
  while(t--)
  {
    string s;
    cin >> s >> n;
     v.push_back({-n,s});
  }
sort(v.begin(),v.end());

for(auto i : v)
{
  cout << i.second <<  " " << -(i.first) << '\n';
}


	return 0;
}
