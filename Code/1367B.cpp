#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int n,arr[41];
    while(tc--)
    {
        cin>>n;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]=arr[i]%2;
        }

        for(int i=0;i<n;i+=2){
            if(arr[i]==1)
                cnt1++;
        }

        for(int i=1;i<n;i+=2){
            if(arr[i]==0)
                cnt2++;
        }

        if(cnt1==cnt2)
            cout<<cnt2<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
