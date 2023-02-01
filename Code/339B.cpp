#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, i;
    cin>>n>>m;
    long long int arr[m];
    for(i=0; i<m; i++)
        cin>>arr[i];
    long long int temp=arr[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(arr[i]>arr[i+1])
            temp=temp+arr[i+1]-arr[i]+n;
        else
            temp=temp+arr[i+1]-arr[i];
    }
    cout<<temp<<endl;


    return 0;
}
