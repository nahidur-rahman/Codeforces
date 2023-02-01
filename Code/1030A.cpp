#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, temp=0;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==1)
            temp=1;
    }

    if(temp==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;

    return 0;
}
