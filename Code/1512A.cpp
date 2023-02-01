#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, arr[100], pos, pos1, pos2;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>arr[i];

        pos=arr[0];
        for(i=1; i<n; i++)
        {

            if(pos!=arr[i])
            {
                pos1=i;
                break;
            }


        }
        if(arr[0]!=arr[1] && arr[0]!=arr[2])
            pos1--;
        cout<<pos1+1<<endl;
    }

    //cout<<pos1<<endl;

    return 0;
}
