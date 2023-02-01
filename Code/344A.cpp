#include<iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    string s[n+1];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=1; i<n; i++){
        if(s[i-1]!=s[i])
            count++;
    }
    cout<<count+1<<endl;
    return 0;
}
