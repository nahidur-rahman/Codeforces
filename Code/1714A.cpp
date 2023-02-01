#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, h1, m1, ans, ansh, ansm;
        cin>>n>>h1>>m1;
        int h[n], m[n], sum[n];
        int hm=h1*60+m1;
        for(int i=0; i<n; i++)
        {
            cin>>h[i]>>m[i];
            if(h[i]>h1)
                sum[i]=h[i]*60+m[i];
            else if(h[i]==h1 && m[i]>=m1)
                sum[i]=h[i]*60+m[i];
            else
                sum[i]=(h[i]+24)*60+m[i];
        }
        sort(sum, sum+n);
        ans=sum[0]-hm;
        ansh=ans/60;
        ansm=ans%60;
        cout<<ansh<<" "<<ansm<<endl;

    }
    return 0;
}

