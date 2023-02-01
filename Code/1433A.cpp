#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string x;
    cin>>x;
    int dig=x[0]-'0'-1;
    int len=x.size();
    int ans=(10*dig)+((len*(len+1))/2);
    cout<<ans<<endl;
  }
}
