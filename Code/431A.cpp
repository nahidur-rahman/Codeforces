#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6], l, cal=0;
    string s;
    for(int i=1; i<=4; i++)
        cin>>a[i];
    cin>>s;
    l=s.length();
    for(int i=0; i<l; i++){
        cal += a[s[i]-'0'];
    }
    cout<<cal<<endl;
    return 0;
}
