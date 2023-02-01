#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int arr[2*n], flag=1;
        for(i=0; i<2*n; i++)
            cin>>arr[i];
        sort(arr, arr+2*n);
        for(i=0; i<n; i++)
        {
            if(arr[n+i]-arr[i] < x)
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
