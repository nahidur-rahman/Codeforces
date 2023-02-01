#include<iostream>
using namespace std;

int main()
{
    int n, count=0, p[101], q[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p[i];
        q[p[i]-1]=i+1;
    }
    for(int i=0; i<n; i++)
        cout<<q[i]<<" ";
    return 0;
}

